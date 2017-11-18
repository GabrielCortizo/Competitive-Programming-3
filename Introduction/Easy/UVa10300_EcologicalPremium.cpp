#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;

int main(){
	int n,t,a,b,c;
	int final;
	
	scanf("%d",&n);
	rep(i,0,n){
		final = 0;
		scanf("%d",&t);
		rep(j,0,t){
		
			scanf("%d%d%d",&a,&b,&c);
			final +=a*c;
		
		}
		printf("%d\n",final);
	}
	
	return 0;
}
