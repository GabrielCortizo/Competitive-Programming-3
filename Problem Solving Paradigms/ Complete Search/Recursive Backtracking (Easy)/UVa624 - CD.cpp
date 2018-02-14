#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;

/*Bit mask solution*/
int vet[23];
int main(){
	int track,t,n;
	int sum,dist,used;
	while(scanf("%d %d",&t,&n) == 2){
		rep(i,0,n)
			scanf("%d",&vet[i]);
		dist = -1000000;
		used = 0;
		rep(i,0,(1<<n)){
			sum = 0;
			for(int j = 0;j<n;j++){
				if(i & (1<<j))
					sum+=vet[j];
				}
				
			if(t-sum >= 0 && (t-sum)<(t-dist)){
				dist = sum;
				used = i;
				if(t == dist)
					break;
			}
		}
		rep(i,0,n)
			if(used &(1<<i)&&vet[i]!=0)
				printf("%d ",vet[i]);
		printf("sum:%d\n",dist);
	}	

}


