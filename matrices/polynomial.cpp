#include<iostream>
#include<math.h>
using namespace std;

struct term{
	int exp;
	int coeff;
};

struct polynomial{
	int n;
	struct term *t;
};

void create(struct polynomial *p){

// initializing values for polynomial
	cin>>p->n;
	p->t = new struct term[p->n];

// initializing value for terms

	for(int i=0;i<p->n;i++){
		cin>>p->t[i].coeff>>p->t[i].exp;
	}

}

void display(struct polynomial p){
	
	for(int i=0;i<p.n;i++){
		if(i<p.n-1){
			cout<<p.t[i].coeff<<"x^"<<p.t[i].exp<<"+ ";
		}else{
			cout<<p.t[i].coeff<<"x^"<<p.t[i].exp;
		}
		
	}
}

void addition(polynomial p1,polynomial p2,polynomial *sum){
	
	sum->t = new term[p1.n+p2.n];
	int i,j,k;
	i=j=k=0;
	while(i<p1.n && j<p2.n){
		
		if(p1.t[i].exp > p2.t[j].exp){
			sum->t[k++] = p1.t[i++];
		}else if(p1.t[i].exp < p2.t[j].exp){
			sum->t[k++] = p2.t[j++];
		}else{
			sum->t[k] = p1.t[i++];
			sum->t[k++].coeff += p2.t[j++].coeff;
		}
	}
	while(i<p1.n){
		sum->t[k++] = p1.t[i++];
	}
	while(j<p2.n){
		sum->t[k++] = p2.t[j++];
	}
	sum->n = k;
}
int evaluation(polynomial p,int x){
	
	int eval = 0;
	
	for(int i=0;i<p.n;i++){
		eval+=p.t[i].coeff*(pow(x,p.t[i].exp));
	}
	
	return eval;
}
int main(){
	struct polynomial p1;
	create(&p1);
	display(p1);
	cout<<endl;
	
	struct polynomial p2;
	create(&p2);
	display(p2);
	cout<<endl;
	
	struct polynomial sum;
	addition(p1,p2,&sum);
	cout<<endl<<endl;
	display(sum);
	cout<<endl<<endl<<evaluation(sum,1);
	return 0;
}
