#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;

int main(){
	int a,b,c,ma,me,n;
	scanf("%d",&n);
	rep(i,1,n+1){
		ma = 0;
		me = 0;
		scanf("%d%d",&c,&a);
		rep(j,1,c){
			scanf("%d",&b);
			if(b>a)
				ma++;
			else if(b<a)
				me++;
				
			a = b;
		}
		printf("Case %d: %d %d\n",i,ma,me);	
	}
	return 0;
}
