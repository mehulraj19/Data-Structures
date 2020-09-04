#include<iostream>
using namespace std;

struct element{
	int i;
	int j;
	int val;
};
struct Sparse{
	int row;
	int col;
	int num;
	struct element *e;
};

void create(Sparse *s){
	cin>>s->row>>s->col;
	cin>>s->num;
	s->e = new element[s->num];
	for(int i=0;i<s->num;i++){
		cin>>s->e[i].i>>s->e[i].j>>s->e[i].val;
	}
}
void display(Sparse s){
	
	int x=0;
	for(int i=0; i<s.row;i++){
		for(int j=0;j<s.col;j++){
			for(int k=0;k<s.num;k++){
				if(i == s.e[k].i && j == s.e[k].j){
					x=0;
					cout<<s.e[k].val<<" ";
					break;
				}else{
					x=1;
				}
			}
			if(x == 1){
				x=0;
				cout<<"0"<<" ";
			}
		}
		cout<<endl;
	}
}

void addition(Sparse* s1,Sparse *s2,Sparse *sum){

	sum->row = s1->row;
	sum->col = s1->col;
	sum->num = s1->num + s2->num;
	sum->e = new element[sum->num];
	
	int i,k,j;
	while(i<s1->num && j<s2->num){
		if(s1->e[i].i < s2->e[j].i){
			sum->e[k++] = s1->e[i++];
		}else if(s1->e[i].i > s2->e[j].i){
			sum->e[k++] = s2->e[j++];
		}else{
			if(s1->e[i].j < s2->e[j].j){
				sum->e[k++] = s1->e[i++];
			}else if(s1->e[i].j > s2->e[j].j){
				sum->e[k++] = s2->e[j++];
			}else{
				sum->e[k] = s1->e[i++];
				sum->e[k++].val += s2->e[j++].val;
			}
		}
	}
	sum->num = k;
}

int main(){
	struct Sparse s1;
	create(&s1); 
	display(s1);
	struct Sparse s2;
	create(&s2); 
	display(s2);
	struct Sparse sum;
	addition(&s1,&s2,&sum);
	cout<<endl<<endl;
	display(sum);
	return 0;
}
