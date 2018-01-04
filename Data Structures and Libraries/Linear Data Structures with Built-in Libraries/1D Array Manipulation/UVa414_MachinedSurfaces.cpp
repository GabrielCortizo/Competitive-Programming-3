#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;

int main(){
	string linha;
	int soma,total,n,minimo;
	while(scanf("%d",&n),n){
		getchar();
		minimo = 1000;
		total = 0;
		rep(i,0,n){
			soma = 0;
			getline(cin,linha);
			rep(j,0,linha.size()){
				if(linha[j] == ' '){
					soma++;
				}
			}
			total+=soma;
			if(soma<minimo)
				minimo = soma;
		}
		total -= minimo*n;
		printf("%d\n",total);
	}
}
