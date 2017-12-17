#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;

int main(){
	int n,m,lim,c,max,atual,d;
	vector<bool> bo;
	vector<int> ca;
	int times = 0;
	while(scanf("%d%d%d",&n,&m,&lim),(n||m||lim)){
		times++;
		bo.assign(n+1,0);
		ca.assign(n+1,0);
		rep(i,1,n+1){
			scanf("%d",&ca[i]);
		}
		c = 0;
		max = -1;
		rep(i,0,m){
			scanf("%d",&d);
			if(bo[d]){
				c -= ca[d];
			}
			else
				c+=ca[d];
			bo[d]=!bo[d];
			if(c > max)
				max = c;
	}
	 	printf("Sequence %d\n",times);
	 	if(max > lim)
	 		printf("Fuse was blown.\n\n");
	 	else
	 		printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n\n",max);

}
}
