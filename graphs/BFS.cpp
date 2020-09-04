#include<iostream>
#include<queue>
using namespace std;

void BreadthFirstSearch(int G[][7], int start, int n){
	int i = start;
	queue<int>q;
	int visited[7] = {0};
	cout<<i;
	visited[i] = 1;
	q.push(i);
	while(!q.empty()){
		int m = q.front();
		q.pop();
		for(int j=1; j<n; j++){
			if(G[m][j] == 1 && visited[j] == 0){
				visited[j] = 1;
				cout<<"  "<<j;
				q.push(j);
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
	BreadthFirstSearch(G,1,7);
	return 0;
}
