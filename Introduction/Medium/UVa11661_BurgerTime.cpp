#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
int main(){
	int mi,l,r,n;
	string a;
	char c;
	bool zero;
	while(scanf("%d",&n)== 1 && n){
		l = r=-1;
		mi = 1e+9;
		zero =0;
		
		rep(i,0,n){
			scanf(" %c",&c);
			if(c == 'Z')
				zero = 1;
			if(c == 'D')
				l = i;
			else if(c == 'R')
				r = i;
			if(r!=-1 && l!=-1)
				if(	mi > (int)fabs(l-r))
					mi = (int)fabs(l-r);
	
		}
		if(zero)
			puts("0");
		else
			printf("%d\n",mi);
	}
	return 0;
}
