#include<bits/stdc++.h>
#define X first
#define Y second
#define rep(i,b,c) for(int i=(int)b;i<(int)c;i++)
using namespace std;
typedef long long int lli;
typedef pair<lli,lli> ii;
/*
	1/k = 1/x + 1/y, x >= y ,condição de parada x == y, x = 2k],e x deve ser no mínimo k+1 para não dar erro
	x = [k+1,2k]
	1/k-1/x = 1/y
	x*k / (x-k) if the division nothing left than its a integer division , we can use;
	Aprender, no caso de poucas informações procurar por limites implicitos e aplicar neles
*/
int main(){
	lli k;
	vector<ii> vet;
	while(scanf("%lld",&k) == 1){
		vet.clear();
		
		for(lli y = k+1;y <= 2*k+1;y++){
			if( (y*k)%(y-k) == 0)
				vet.push_back(ii((y*k)/(y-k),y));
		}
		
		printf("%d\n",(int)vet.size());
		rep(i,0,vet.size())
			printf("1/%lld = 1/%lld + 1/%lld\n",k,vet[i].X,vet[i].Y);
	
	}


}
