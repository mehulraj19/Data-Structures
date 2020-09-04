#include<iostream>
using namespace std;

class queue{
	int q[20];
	int front,rear;
	
	public:
		queue(){
			front = rear = -1;
		}
		void push(int data){
			if(front == rear){
				front = rear = 0;
			}else{
				rear++;
			}
			q[rear] = data;
		}
		int pop(){
			if(front < rear){
				int x = q[front];
				front++;
			}
			return x;
		}
		void display(){
			
			for(int i = front; i<= rear; i++){
				cout<<q[i]<<"  ";
			}
			
		}
};

int main(){
	
//	enter code here....

	return 0;
}
