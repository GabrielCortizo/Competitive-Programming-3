/*
	Simple we're going to use the idea of using different pointers start(s) and last(l);
	if(the value of s is larger than last then we keep moving the last.If the value is bigger than we
	gonna use as a checkpoint (new start);
*/

#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int vetor[100010];
int main(){
	int t,n,maximo,s,last;
	scanf("%d",&t);
	while(t--){
		maximo = -1000000000;
		scanf("%d",&n);
		rep(i,0,n)scanf("%d",&vetor[i]);
		s = 0;
		last = 1;
		while(last<n){
			if(vetor[s]>=vetor[last]){
				maximo = max(maximo,vetor[s]-vetor[last]);
				last++;
				
			}
			
			else{
					maximo = max(maximo,vetor[s]-vetor[last]);
					s =last;last++;
			}
		}
	
		printf("%d\n",maximo);
	}
}
