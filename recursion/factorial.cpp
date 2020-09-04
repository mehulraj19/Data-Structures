#include<iostream>
using namespace std;

int factorial_iterate(int num){
    int fac = 1;
    for(int i=1; i<=num; i++){
        fac *= i;
    }
    return fac;
}

int factorial_recursion(int num){
    if(num == 0 || num == 1){
        return 1;
    }else{
        return num* factorial_recursion(num-1);
    }
}

int main(){
    cout<<factorial_iterate(5);
    cout<<endl<<factorial_recursion(5);
}