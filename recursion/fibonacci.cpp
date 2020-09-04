#include<iostream>
using namespace std;

int fibonacci_series_recursion(int num){
    
    if(num <= 1){
        return num;
    }else{
        return fibonacci_series_recursion(num-2) + fibonacci_series_recursion(num-1);
    }
}
// Order O(2^n)-recursion
int fibonacci_series_iterate(int num){
    
    int a = 0;
    int b = 1;
    int c = 0;
   for(int i=2;i<=num;i++){
   	c=a+b;
   	a=b;
   	b=c;
   }
    
    return b;
}
//Order O(n)-iterate

int ar[7];
int fibonacci_series_method3(int num){
	if(num<=1){
		ar[num] = num;
		return num;
	}
	if(ar[num-2] == -1){
		ar[num-2] = fibonacci_series_method3(num-2);
	}
	if(ar[num-1] == -1){
		ar[num-1] = fibonacci_series_method3(num-1);
	}
	return fibonacci_series_method3(num-2)+fibonacci_series_method3(num-1);
	
}
int main(){
    for(int i=0;i<7;i++){
    	ar[i] = -1;
	}
    cout<<fibonacci_series_recursion(7);
    cout<<endl<<fibonacci_series_iterate(7);
    cout<<endl<<fibonacci_series_method3(7);
    
    return 0;
}
