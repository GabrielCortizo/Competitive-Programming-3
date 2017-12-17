#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
int main(){
	int n,a,b,t,can,c=0;
	int m;
	scanf("%d",&n);
	rep(i,0,n){
		if(c++>0)
			puts("");
		scanf("%d%d%d",&t,&a,&b);
		m = (int)(abs(a-b));
		can = 1;
		rep(j,1,t){
			scanf("%d%d",&a,&b);
				if((int)abs(a-b)!=m)
					can = 0;
		}
		if(can)
			printf("yes\n");
		else 
			printf("no\n");
	}
}
