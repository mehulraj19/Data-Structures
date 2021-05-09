#include<bits/stdc++.h>
using namespace std;
int N = 50;
int ar[50] = {0};

int fib(int n) {
  if(n <= 2) {
    return 1;
  }
  ar[n] = fib(n-1) + fib(n-2);
  return ar[n];
}

int main() {
  cout << fib(40);
  return 0;
}

