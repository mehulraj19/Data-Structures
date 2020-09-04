#include<iostream>
#include<math.h>
using namespace std;

int power_of_number_iterate(int num, int power){
    int num1 = num;
    while(power-1>0){
        num1 = num1 * num;
        power--;
    }
    return num1;
}

int power_of_number_recursion(int num, int power){
    if(power == 0){
        return 1;
    }else{
        return num * power_of_number_recursion(num,power-1);
    }
}

int power_of_number_formula(int num, int power){
    return pow(num,power);    
}

int main(){
    cout<<power_of_number_iterate(4,3);
    cout<<endl<<power_of_number_recursion(4,3);
    cout<<endl<<power_of_number_formula(4,3);
    return 0;
}