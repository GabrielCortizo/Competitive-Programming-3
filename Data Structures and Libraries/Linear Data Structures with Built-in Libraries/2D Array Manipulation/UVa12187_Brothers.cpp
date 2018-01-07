#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int atual[101][101],ultima[101][101];
bool checa[101][101];

void modifica(int R,int L,int N){
	int valido;
	rep(i,0,R){
			rep(j,0,L){
					ultima[i][j] =  atual[i][j];
				}
		}
	
	rep(i,0,R){
		rep(j,0,L){	
			if(	j>0 && atual[i][j-1] == (atual[i][j]+1)%N)
					ultima[i][j-1] = atual[i][j];
				
			if(j< L-1 && atual[i][j+1] == (atual[i][j]+1)%N)
				ultima[i][j+1] = atual[i][j];
		
			if(i>0 && atual[i-1][j] == (atual[i][j]+1)%N)
				ultima[i-1][j] = atual[i][j]; 
			
			if(i<R-1 && atual[i+1][j] == (atual[i][j]+1)%N)
				ultima[i+1][j] = atual[i][j];
		}
	}
	rep(i,0,R){
		rep(j,0,L){
			atual[i][j] =  ultima[i][j];
		}
	}
}



int main(){
	int N,R,L,C;
	int val;
	while(scanf("%d %d %d %d",&N,&R,&L,&C),(L||R||C||N)){
	
		rep(i,0,R){
			rep(j,0,L){
				scanf("%d",&atual[i][j]);
			}
		}
		
		rep(i,0,C){
				modifica(R,L,N);
				}
				
		rep(i,0,R){
			cout <<atual[i][0]; 
			rep(j,1,L){
					cout <<" "<< atual[i][j];
				}
				
		puts("");
		}
		
	}
}
