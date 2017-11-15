#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
int main(){
	int n,a,b,c;
	bool fit = 1;
	cin >> n;
	
	rep(i,0,n){
		fit =1 ;
		cin >> a>>b>>c;
		if(a>20 || b>20 || c>20)
			fit = 0;	
		if(fit)
			printf("Case %d: good\n",i+1);
		else 
			printf("Case %d: bad\n",i+1);
	}
	return 0;
}
