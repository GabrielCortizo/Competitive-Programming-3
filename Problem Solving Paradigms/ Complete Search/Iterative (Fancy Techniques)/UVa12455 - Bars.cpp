#include<bits/stdc++.h>
#define rep(i,b,c) for(int i= (int)b;i<(int)c;i++)
using namespace std;
int vet[21];
int main(){
	int n,t,want,sum,p;
	bool got;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&want);
		scanf("%d",&p);
		got = 0;
		rep(i,0,p)
			scanf("%d",&vet[i]);
		for(int i = 0;i<(1<<p)&&!got;i++){
			sum = 0;
			for(int j = 0;j<p;j++){
				if(i & (1<<j))
					sum+=vet[j];
				if(sum == want){
						got = 1;
						break;
					}
			}
			
		}
		
		if(got)	puts("YES");
		else     puts("NO");
	}

}
