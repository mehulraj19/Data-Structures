#include<iostream>
using namespace std;

class stack{
	public:
		int st[20];
		int max = 20;
		int head = 0;
		int pop(){
			int x = st[head];
			head--;
			return x;
		}
		void push(int data){
			st[head++] = data;
		}
		bool isEmpty(){
			if(head == 0){
				return true;
			}
			return false;
		}
		bool isFull(){
			if(head == max){
				return true;
			}
			return false;
		}
		int stackTop(){
			return st[head];
		}
		int peak(int pos){
			pos =  max-pos-1;
			if(pos < 0){
				return -1;
			}else{
				return st[pos];
			}
		}
};

int main(){
	
	return 0;
}
