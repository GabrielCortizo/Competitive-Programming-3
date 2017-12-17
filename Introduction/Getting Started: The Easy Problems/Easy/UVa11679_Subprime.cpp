#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;

int main(){
	int b,v;
	int bancos[21]={};
	int a,d,c;
	int fa;
	
	while(scanf("%d%d",&b,&v),(b||v)){
		fa = 0;
		rep(i,1,b+1)
			scanf("%d",&bancos[i]);

		rep(i,0,v){
			scanf("%d%d%d",&a,&d,&c);
			bancos[a]-=c;
			bancos[d]+=c;
			}
			
			
		rep(i,1,b+1){
				if(bancos[i] < 0){fa = 1;break;}
		}
		if(fa)
			printf("N\n");
		else 
			printf("S\n");
		
	}
	return 0;
}
