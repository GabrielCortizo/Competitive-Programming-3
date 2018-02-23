#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int a[21][21],b[21][21],c[21][21];
int sol[3];
int main(){
	int na,nb,nc;
	int cont,last;
	int soma ,mini;
	while(scanf("%d %d %d",&na,&nb,&nc) == 3){
		mini = 1000000000;
		rep(i,0,na) rep(j,0,nb+1) scanf("%d",&a[i][j]);
		rep(i,0,nb) rep(j,0,nc+1) scanf("%d",&b[i][j]);
		rep(i,0,nc) rep(j,0,na+1) scanf("%d",&c[i][j]);
		
		rep(i,0,na){
			soma = a[i][0];
			rep(j,0,nb){
				if(a[i][j+1] == 1)
					continue;
				soma+=b[j][0];
				rep(k,0,nc){
					if(b[j][k+1] == 1 || c[k][i+1] == 1)
						continue;
					if(mini>soma+c[k][0]){
						mini = soma+c[k][0];
						sol[0] = i;sol[1] =j;sol[2] = k;
					
					}	
				}
				soma-=b[j][0];
			}
		}
		if(mini == 1000000000)
			printf("Don't get married!\n");
		else
			printf("%d %d %d:%d\n",sol[0],sol[1],sol[2],mini);
	}
}
