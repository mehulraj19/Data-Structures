#include<iostream>
#include<stack>
using namespace std;

stack <int> s1;
stack <int> s2;

void enqueue(int data){
	s1.push(data);
}
void dequeue(){
	if(s1.empty()){
		cout<<"UnderFlow";
	}else{
		while(! s1.empty()){
			s2.push(s1.top());
			s1.pop();
		}
		s2.pop();
		while(! s2.empty()){
			s1.push(s2.top());
			s2.pop();
		}
	}
}
int main(){
//	Can enter code here to add in values in queue and pop out values from queue...
}
