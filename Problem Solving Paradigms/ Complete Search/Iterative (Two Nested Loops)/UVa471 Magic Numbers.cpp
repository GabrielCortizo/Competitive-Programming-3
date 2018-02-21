#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
typedef long long int lli;
bool different(lli a){
	lli  temp = a,mode;
	int used=0;
	while(temp!=0){
		mode = temp%10;
		if(used & 1<<mode)
			return false;
			
		else 
			used |= (1<<mode);
			
		temp/=10;
	}
	return true;
}

int main(){
	int t;
	lli a,b,n,i;
	scanf("%d",&t);
	while(t--){
		a = 1;
		i = 1;
		scanf("%lld",&n);
		while(a<1e+11){
			a = i*n;
			if(a>=1e+11)
				break;
			if(different(a) && different(i))
				printf("%lld / %lld = %lld\n",a,i,n);
			i++;
		}
		
		if(t!=0)
			puts("");	
	
	}


}
