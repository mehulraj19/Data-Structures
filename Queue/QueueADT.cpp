#include<iostream>
using namespace std;

class Queue{
public:
    int Queue[20];
    int max = 20;
    int front=0, rear=0;
    void enqueue(int data){
        if(rear == max){
            cout << "Overflow";
        }else{
            Queue[rear++] = data;
        }
    }
    int dequeue(){
        if(front == rear){
            cout << "Underflow";
        }else{
            int x = Queue[front++];
        }
    }
    bool isempty(){
        if ( front == rear ){
            return true;
        }
        return false;
    }
};

int main(){
    // Enter code here!!
}
