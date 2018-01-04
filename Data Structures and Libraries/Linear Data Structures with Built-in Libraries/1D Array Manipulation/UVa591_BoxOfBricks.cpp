#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int main(){
	int n,moves,total,d = 1,vetor[51];
	while(scanf("%d",&n),n){
		total = moves = 0;
		rep(i,0,n){
			scanf("%d ",&vetor[i]);
			total+=vetor[i];
		}
		rep(i,0,n){
			if(vetor[i]>total/n)
				moves+=vetor[i]-total/n;
		
		}
		
		printf("Set #%d\n",d++);
		printf("The minimum number of moves is %d.\n",moves);
		puts("");
	
	}

}
