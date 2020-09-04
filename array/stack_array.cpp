#include<iostream>
using namespace std;

class Stack(){
	
	int st[20];
	int top;
	
	public:
		Stack(){
			top = 0;
		}
		
		void push(int n){
			st[top++] = n;
		}
		
		int pop(){
			int k = st[top--];
			return k;
		}
		
		void display(){
			int i = 0;
			while(i<top){
				cout<<st[i]<<"  ";
			}
		}
		
}
int main(){
	
//	 can enter code here....
}
