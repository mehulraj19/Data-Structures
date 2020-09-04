#include<iostream>
# define I INT_MAX
using namespace std;

int edges[3][9] = { {1,1,2,2,3,4,4,5,5}, {2,6,3,7,4,5,7,6,7}, {25,5,12,10,18,16,14,20,18}};
int set[8] = {-1,-1,-1,-1,-1,-1,-1,-1};
int included[8] = {0};
int t[2][6];


void WeightedUnion(int u, int v){
	if(set[u] < set[v]){
		set[u] += set[v];
		set[v] = u;
	}else{
		set[v] += set[u];
		set[u] = v;
	}
}

int find(int u){
	int x = u;
	while(set[x] > 0){
		x = set[x];
	}
//	while(u != x){
//		int v = set[u];
//		set[u] = x;
//		u = v;
//	}
	return x;
}

int main(){
	
	int i=0,j,k,u,v,min,n=7,e=9;
//	Algorithm
	while(i < n-1){
		min = I;
		for(int j=0;j<e;j++){
//			Checking for min edge
			if(included[j] == 0 && edges[2][j] < min){
				min = edges[2][j];
				u = edges[0][j];
				v = edges[1][j];
				k =j;
			}
		}
//		Checking for cycle
		if(find(u) != find(v)){
			t[0][i] = u;
			t[1][i] = v;
			WeightedUnion(find(u), find(v));
			i++; 
		}
//		Including the node that has only been visited
		included[k] = 1;
	}
//	Displaying 
	for(int i=0;i<n-1;i++){
		cout<<"("<<t[0][i]<<","<<t[1][i]<<")"<<endl;
	}	
	return 0;
}
