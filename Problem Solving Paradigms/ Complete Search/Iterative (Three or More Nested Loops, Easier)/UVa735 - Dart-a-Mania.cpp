#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int vetor[100];
int main(){
	int n,d = 0,cont1,cont2;
	rep(i,0,21)  vetor[d++] = i;
	rep(i,11,21) vetor[d++] = 2*i;
	rep(i,7,21)	{
		n = 3*i;
		if(i%2==0 && n<=40)
			continue;
		if(i == 17)
			vetor[d++] = 50;
		vetor[d++] = n;
		}
	sort(vetor,vetor+d);
	while(scanf("%d",&n)==1 && n>0){
		cont1 = cont2 = 0;
		rep(a,0,d)
			rep(b,0,d)if(a+b<=n)
				rep(c,0,d){
					if(vetor[a]+vetor[b]+vetor[c]== n){
						cont1++;
						if(vetor[a]>=vetor[b] && vetor[b] >=vetor[c])
							cont2++;
					}
						
					}
		
		if(cont1>0){
			printf("NUMBER OF COMBINATIONS THAT SCORES %d IS %d.\n",n,cont2);
			printf("NUMBER OF PERMUTATIONS THAT SCORES %d IS %d.\n",n,cont1);
			}
		else 
			printf("THE SCORE OF %d CANNOT BE MADE WITH THREE DARTS.\n",n);
		
		puts("**********************************************************************");
	}
	puts("END OF OUTPUT");
}
