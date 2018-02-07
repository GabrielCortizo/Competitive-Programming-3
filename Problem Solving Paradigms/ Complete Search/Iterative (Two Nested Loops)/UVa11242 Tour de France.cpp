#include<bits/stdc++.h>
#define rep(i,b,c) for(int i=(int)b;i<(int)c;i++)
using namespace std;

double front[12],back[12],q[120];
int main(){
	double sol,v;
	int n,m,d;
	while(scanf("%d",&n),n ){
		scanf("%d",&m);
	
		rep(i,0,n)	scanf("%lf",&front[i]);
		rep(j,0,m)	scanf("%lf",&back[j]);
		d = 0;
		rep(i,0,n)
			rep(j,0,m)
				q[d++] = front[i]/back[j];
		sort(q,q+n*m);
		sol = -1;
		rep(i,0,n*m-1)
			sol = max(sol,q[i+1]/q[i]);
		
		printf("%.2lf\n",sol);
	}
}
