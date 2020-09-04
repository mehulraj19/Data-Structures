#include<iostream>
using namespace std;

int sum_iterate(int num){
    int s = 0;
    for(int i=0; i<=num; i++){
        s+=i;
    }
    return s;
}
int sum_formula(int num){
    return num*(num+1)/2;
}
int sum_recursion(int num){
    if(num == 0){
        return num;
    }else{
        return num + sum_recursion(num-1);
    }
}
int main(){
    cout<<sum_recursion(5);
    cout<<endl<<sum_formula(5);
    cout<<endl<<sum_iterate(5);
    return 0;
}