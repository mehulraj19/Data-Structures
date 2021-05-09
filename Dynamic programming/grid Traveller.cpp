#include<bits/stdc++.h>
using namespace std;

int gridTraveler(int m, int n) {
	if(m == 1 && n == 1) return 1;
	if(m == 0 || n == 0) return 0;
	return gridTraveler(m-1, n) + gridTraveler(m ,n-1);
}

int main() {
	
	cout << gridTraveler(1,1); // 1
	cout << endl;
	cout << gridTraveler(2,3); // 3
	cout << endl;
	cout << gridTraveler(3,2); // 3
	cout << endl;
	cout << gridTraveler(3,3); // 6
	cout << endl;
	cout << gridTraveler(18,18); //2333606220
	
	return 0;
}
