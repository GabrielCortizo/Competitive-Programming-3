#include<bits/stdc++.h>
#define rep(i,b,c) for(int i =(int)b;i<(int)c;i++)
using namespace std;
int vetor[51],maximo,limite;
void work(int n){
	int temp;
	bool zero = 0;
	
	rep(i,1,limite+1){
	
		if(vetor[i] == 0) {
			temp = vetor[i];
			vetor[i] = n;
			maximo = max(n,maximo);
			return work(n+1);
		}
		
		if ( sqrt(vetor[i]+n) == floor(sqrt(vetor[i]+n) )){
			temp = vetor[i];
			vetor[i] = n;
			maximo = max(n,maximo);
			return work(n+1);		
		}
	
	}

}

int main(){
	int tc,n;
	scanf("%d",&tc);
	while(tc--){
	maximo = -1;
		scanf("%d",&limite);
		memset(vetor,0,sizeof vetor);
		work(1);
		printf("%d\n",maximo);
	}

}
