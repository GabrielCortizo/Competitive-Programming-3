#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
/*
	Easy:
		Usamos todos os possíveis divisores de v , a questão esta mal escrita , tam == size da um erro temos de usar o 0.00000001 como comparação para igual
		ps:lembrar de usar o ponto flutuante para o va,tam e size;		

*/
int main(){
	int n,t,val,disc;
	double tam,size,va,v,v0;
	while(scanf("%lf %lf",&v,&v0),(v||v0)){
		size = n = dic = 0;
		t = 1;
		va = v;
	while(va>v0){
		tam =(double)t*(sqrt(va-v0));
		
		if(abs(tam-size)<=0.00000001)
			n++;
			
		else if (tam>size){
			size =tam;
			n = 1;
			disc = t;
				
		}
		va = v/(++t);
		}

	if(disc == 0||n>1)
		puts("0");
	else
		printf("%d\n",disc);
	}

}
