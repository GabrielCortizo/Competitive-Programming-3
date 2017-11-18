#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
int main(){
	int t,n;
	double mile,juice,tem;
	scanf("%d",&n);
	rep(i,0,n){
		mile = juice =0;
		scanf("%d",&t);
		rep(j,0,t){
			scanf("%lf",&tem);
			
			mile +=ceil(tem/30)*10;
			if((int)tem%30==0)
				mile+=10;
				
			if((int)tem%60==0)
				juice +=15;
			juice +=ceil(tem/60)*15;
			
		}
		
		printf("Case %d: ",i+1);
		if(juice <mile)
			printf("Juice %d\n",(int)juice);
		else if(mile < juice)
			printf("Mile %d\n",(int)mile);
		else
			printf("Mile Juice %d\n",(int)mile);
	}
}
