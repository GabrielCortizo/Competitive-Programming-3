#include <bits/stdc++.h>
#define rep(i,b,c) for(int i= (int)b;i<(int)c;i++)
using namespace std;
int esquerda[100001];
int direita[100001];


int main(){
	int s,l,e,d,a,b;
	while(scanf("%d %d",&s,&l),(s||l)){
		rep(i,1,s+1){
			esquerda[i] = i-1;
			direita[i] = i+1;
		}
		esquerda[1] = -1;
		direita[s] = -1;
		
		rep(i,0,l){
			scanf("%d %d",&e,&d);
		esquerda[direita[d]] = esquerda[e];
		
			if(esquerda[e] == -1 )
				printf("* ");
			else
				printf("%d ",esquerda[e]);
			direita[esquerda[e]] = direita[d];
			if(direita[d] == -1)
				printf("*\n");
			else
				 printf("%d\n",direita[d]);
			
		}
		puts("-");
	}
}
