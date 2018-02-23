#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)/*Só precisa de um loop mesmo*/
using namespace std;
int vetor[300];
int main(){
	int t,a,b,cont,co = 0;
	char c;
	
	scanf("%d",&t);
	while(t--){
		cont = 0;
		memset(vetor,-1,sizeof vetor);
		scanf("%d %d ",&a,&b);
		rep(i,0,a){
			scanf("%c",&c);
			
			if(vetor[c-'A'] != -1 && i-vetor[c-'A'] <= b)
					cont++;
			vetor[c-'A'] = i;
		
		}
		printf("Case %d: %d\n",++co,cont);
		
	}
}
