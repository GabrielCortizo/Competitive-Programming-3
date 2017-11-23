#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
int main(){
	int n,mi,l,r,cont;
	int x,y;
	int v[10001];
	while(scanf("%d",&y)==1 && y!=0){
		scanf("%d",&x);
		rep(i,0,x)
			scanf("%d",&v[i]);
		cont = 0;
		cont +=y-v[0];

		rep(i,1,x){
			mi = 0;
			if(v[i]!=y){

				mi = v[i-1]-v[i];
				if(mi >0)
					cont+=mi;
				}
	
		}
		
		printf("%d\n",cont);	
	}
}
