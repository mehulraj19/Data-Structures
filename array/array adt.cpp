#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

class Array{
	int A[20];
	int size;
	
	public:
		Array(){
			size = 0;
		}
		
		void getdata(int n, int r){
			if(r<0 || r>size){
				cout<<"invalid place!!";
			}else{
				cout<<A[r];
			}
		}
		
		void display(){
			for(int i=0;i<size;i++){
				cout<<A[i]<<"  ";
			}
		}
		
		void max(){
			int m = 0;
			for(int i=0;i<size;i++){
				if(m<A[i]){
					m = A[i];
				}
			}
		}
		
		void min(){
			int m1 = A[0];
			for(int i=1;i<size;i++){
				if(m1 > A[i]){
					m1 = A[i];
				}
			}
		}
		
		void append(int n){
			A[size] = n;
			size++;
		}
		
		void insert(int n, int r){
			A[r] = n;
		}
		
		void deletion(int index){
			if(index <0 || index > size){
				for(int i=index, i<size-1;i++){
					A[i] = A[i+1];
				}
				size--;
			}
		}
		
		void pop(){
			cout<<A[size];
			size--;
		}
		
		bool linear_search(int val){
			
			for(int i=0; i<size; i++){
				if(A[i] == val){
					swap(&A[i],&A[0]);
					return true;
				}
			}
			return false;
		}
		
		bool binary_search(int low, int high, int val){
			
			if(low<=high){
				
				int mid = (low + high)/2;
				if(val == A[mid]){
					return mid;
				}else if(val < A[mid]){
					return binary_search(low,mid-1,val);
				}else{
					return binary_search(mid+1,high,val);
				}

			}
			return -1;
		}
		
		int sum(){
			int s = 0;
			for(int i=0;i<size;i++){
				s+=A[i];
			}
			return s;
		}
		
		int average(){
			float av = sum()/size; 
			return av;
		}
};

int main(){
	
	int A[20] = {5,3,2,1,5,6,3};
	display(A,7);
	return 0;
}
