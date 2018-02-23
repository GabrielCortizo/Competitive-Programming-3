#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int vetor[10002];
/*
	Intervalo aberto entre prédios

*/

int main(){

	int a,b,c,f,s= 100000;
	int last = -1;
	while(scanf("%d %d %d",&a,&b,&c) == 3){
		rep(i,a,c){
			vetor[i] = max(vetor[i],b);
		}
	}
	bool ine =0 ;
	int h = 0;
	for(int pos = 0;pos!=10000;++pos){
	
		if(h != vetor[pos]){
			
			if(ine) printf(" ");
			else  ine = true;
			
			printf("%d %d",pos,vetor[pos]);
			h = vetor[pos];
		}
	}
	cout <<endl;
}
