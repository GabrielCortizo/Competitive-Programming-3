#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int matrix[101][101];

int main(){
	int n,x,y;
	int somax,somay,soma = 0;
	while(scanf("%d",&n),n){
		x = y  = -1;
		somax= somay = 0;
		rep(i,0,n){
			soma = 0;
			rep(j,0,n){
				scanf("%d",&matrix[i][j]);
				soma +=matrix[i][j];
			}
			if(soma%2){
				somax++;
				x = i; 	
			}
		}
		rep(i,0,n){
			soma = 0;
			rep(j,0,n)
				soma += matrix[j][i];
		
			if(soma%2){
				somay++;
				y = i;
			}
		}
		
		if(somax == 1 && somay == 1)
			printf("Change bit (%d,%d)\n",1+x,y+1);
		else if(!(somax || somay))
			puts("OK");
		else	 
			puts("Corrupt");
	}

}
