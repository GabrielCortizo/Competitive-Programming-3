#include <bits/stdc++.h>
#define rep(i,b,c) for(int i= (int)b;i<(int)c;i++)
using namespace std;
int gas[100001];
int main(){
	int t,n,ind,suma,sumb,val,atual;
	scanf("%d ",&t);
	rep(d,1,t+1){
		scanf("%d",&n);
		suma = sumb =0;
		rep(i,0,n){
			scanf("%d ",&gas[i]);
			suma+=gas[i];
			}
			
		rep(i,0,n){
			scanf("%d ",&val);
			sumb+=val;
			gas[i] -=val;
		}
		
		ind = -1;
		if(suma>=sumb){
			ind = 0;
			atual = 0;
			rep(i,0,n){
			
				if(atual+gas[i] >= 0){
					atual+=gas[i];
				}
				else{
					ind = i+1;
					atual = 0;
				}
				
			}	
		}
		
		if(ind ==-1)
			printf("Case %d: Not possible\n",d);
		else
			printf("Case %d: Possible from station %d\n",d,ind+1);

	}

}
