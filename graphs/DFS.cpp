#include<iostream>
using namespace std;

void DepthFirstSearch(int G[][7], int start, int n){
	static int visited[7] = {0};
	if(visited[start] == 0){
		cout<<start<<"  ";
		visited[start] = 1;
		for(int j=1; j<=n ;j++){
			if(G[start][j] == 1 && visited[j] == 0){
				DepthFirstSearch(G, j, n);
			}
		}
	}
	
}

int main(){
//	Not using 0th row and 0th Column.
	int G[7][7] = { {0,0,0,0,0,0,0},
					{0,0,1,1,0,0,0},
					{0,1,0,0,1,0,0},
					{0,1,0,0,1,0,0},
					{0,0,1,1,0,1,1},
					{0,0,0,0,1,0,0},
					{0,0,0,0,1,0,0}};
	DepthFirstSearch(G,1,7);
	return 0;
}
