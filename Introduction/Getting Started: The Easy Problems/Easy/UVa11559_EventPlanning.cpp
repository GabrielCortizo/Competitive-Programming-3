#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;

int main(){
	int n,b,h,p,w,a;
	while(scanf("%d%d%d%d",&n,&b,&h,&w)!=EOF){
		int can = 0;
		int maior = -1;
		int valor = 500001;
		rep(i,0,h){
			scanf("%d",&p);
			rep(j,0,w){
				scanf("%d",&a);
				if(maior<a)
					maior = a;
			}
			
			if(b-p*n < 0)
				continue;
			else if(maior<n)
				continue;
			else if(valor > p*n){
				valor = p*n;
				can = 1;
			}
		}
		if(can)
			printf("%d\n",valor);
		else
			printf("stay home\n");
	
	}

}
