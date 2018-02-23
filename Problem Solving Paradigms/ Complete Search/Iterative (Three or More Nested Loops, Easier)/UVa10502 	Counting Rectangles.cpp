#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int matrix[101][101];

int main(){
	int cont,n,m,last,ind;
	while(scanf("%d",&n),n){
		scanf("%d",&m);
		rep(i,0,n) rep(j,0,m) scanf("%1d",&matrix[i][j]);
		cont = 0;
		rep(i,0,n){
			rep(j,0,m){
				last = m;
				rep(k,i,n){
					if(matrix[k][j] == 0)	break;
					rep(l,j,last){
					
						if(matrix[k][l] == 1)
							cont++;
							
						else {
							last = l;
							break;
						
						}
					}
				}
			
			}
		}
		printf("%d\n",cont);
	}

}
