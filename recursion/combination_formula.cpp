#include<iostream>
using namespace std;

int fac(int num){
    
    if(num <= 1){
        return 1;
    }else{
        return fac(num-1)*num;
    }
}


int combination_formula(int num,int r){
    
    return fac(num)/(fac(r)*fac(num-r));
}



int main(){
    
    cout << combination_formula(5,2) << endl;
    
    return 0;
}