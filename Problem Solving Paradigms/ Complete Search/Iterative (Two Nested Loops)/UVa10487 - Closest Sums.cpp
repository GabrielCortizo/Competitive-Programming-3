#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
typedef long long int lli;
lli vetor[1001];
lli bil = 1000000000;
int main(){
	int n,m,c = 1;
	lli sum,v,small,a,b;
	while(scanf("%d",&n),n){
		rep(i,0,n)
			scanf("%lld",&vetor[i]);
		scanf("%d",&m);
		printf("Case %d:\n",c++);
		small = bil;
		rep(i,0,m){
			scanf("%lld",&v);
			rep(i,0,n)
				rep(j,i+1,n){
					sum = vetor[j] + vetor[i];
					a = (sum - v > 0)?sum-v:v-sum;
					b = (small -v >0)?small-v:v-small;
					small = (a > b)?small:sum;		
				}
			
			printf("Closest sum to %lld is %lld.\n",v,small);
		}	
	}
}
