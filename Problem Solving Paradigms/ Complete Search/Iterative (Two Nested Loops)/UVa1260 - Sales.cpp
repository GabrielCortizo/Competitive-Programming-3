#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int a[1001];
int main(){
	int n,t,cont;
	scanf("%d",&t);
	while(t--){
		cont = 0;
		scanf("%d",&n);
		rep(i,0,n)
			scanf("%d",&a[i]);
		rep(i,1,n){
			rep(j,0,i){
				if(a[i] >= a[j])
					cont++;
			}
		}
		printf("%d\n",cont);
	
	}

}
