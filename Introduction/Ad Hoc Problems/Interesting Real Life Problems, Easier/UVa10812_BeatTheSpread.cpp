#include <bits/stdc++.h>
#define rep(i,b,c) for(int i =b ;i<c;i++) 
using namespace std;

int main(){
	int n,a,b,va,vb;
	scanf("%d",&n);
	while(n--){
	
		scanf("%d%d",&a,&b);
		va = (a+b)/2;
		int r = (a+b)%2;
		vb = a-va;
		if(va >=0 && vb>=0 && r == 0)
			printf("%d %d\n",va,vb);
		else 
			puts("impossible");
	}

}
