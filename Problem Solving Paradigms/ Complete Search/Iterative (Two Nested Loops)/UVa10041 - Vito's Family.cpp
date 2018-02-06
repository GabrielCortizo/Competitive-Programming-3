#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int vetor[510];
int main(){
	int r,n;
	int soma,mi;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&r);
		rep(i,0,r)
			scanf("%d",&vetor[i]);
	
		mi = 100000000;
		rep(i,0,r){
			soma = 0;
			rep(j,0,r){
				soma += (int)abs(vetor[i]-vetor[j]);
			
			}
			mi = min(mi,soma);
		}
		cout << mi<<"\n";
	}

}
