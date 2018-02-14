#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int tow[20], com[20], val[20];

int count(int a){
	int n = 0;
	while(a!=0){
		n++;
		a-=(a&(-a));
	}
	return n;
}

int main(){
	int p,n,used,best,a,b,c,d,t =1;
	int soma,fim;
	while(scanf("%d %d",&p,&n),(p||n)){
		best = -1;
		memset(com,0,sizeof(com));
	   memset(tow,0,sizeof tow);
	   
		rep(i,0,p)	scanf("%d",&tow[i]);
		
		scanf("%d",&c);
		rep(i,0,c){
			scanf("%d",&d);
			com[i] = 0;
			rep(j,0,d){
				scanf("%d",&a);a--;
				com[i]|=(1<<a);	
			}
			scanf("%d",&val[i]);
		}
		
		for(int i = 1;i<(1<<(p));i++){
			if(count(i) == n){
				soma = 0;
				for(int j = 0;j<p;j++)
					if(i&(1<<j))
						soma+=tow[j];
						
				rep(j,0,c){
				
					int temp = com[j]&i;
					if(temp >1)
						soma-=(count(temp)-1)*val[j];
				
				}
				
				if(soma > best){
					best = soma;
					fim = i;
				}		
			
			}
		
		}
		printf("Case Number  %d\n",t++);
		printf("Number of Customers: %d\n",best);
		printf("Locations recommended:");
		for(int i = 0;i<p;i++)
			if(fim&(1<<i))
				printf(" %d",i+1);
		puts("\n");
		
	}

}
