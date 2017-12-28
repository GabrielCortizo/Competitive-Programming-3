#include <bits/stdc++.h>
#define rep(i,b,c) for(int i= b;i<c;i++)
using namespace std;
typedef vector<int> vi;
int main(){
	int n,a,dif,ind,tam,size = 0;
	int vetor[] = {0,60,120,180,240,300,360,420,480};
	while(scanf("%d",&n)==1 && n!=-1){
		vector<int> vet[5];
		size = 0;
		rep(i,0,n){
			rep(j,0,4){
				scanf("%d",&a);
				vet[j].push_back(a);	
			
			}
			dif = 1000;
			ind = 0;
			scanf("%d",&a);
			rep(k,0,9){
			
				if( (int)abs(a-vetor[k]) <= dif){
					ind = k;
					dif = (int)abs(a-vetor[k]);
				}
		
			}
			
			if(ind ==8){
					if(vet[3][i] == 4){
						vet[3][i] = 1;
						vet[2][i] ++;
					}
					else
						vet[3][i]++;
						
					vet[4].push_back(0);
				}
				
				else
					vet[4].push_back(vetor[ind]);
					tam = i-1;
					dif = 0;
					if(vet[0][i] == 0){
						while(vet[1][tam] != vet[1][i])
							tam--;
						rep(k,2,5){
							if(vet[k][i] == vet[k][tam])
								dif++;
						}	
					
						if(dif == 3){
							vet[0][i] = -1;
							vet[0][tam] = -1;
							size+=2;
						
						}
					}
					
				
		}
		printf("%d\n",n-size);
		rep(i,0,n){
		
			if(vet[0][i]==-1)
				continue;
				printf("%d",vet[0][i]);
			rep(j,1,5)
				printf(" %d",vet[j][i]);
			puts("");	
			
		}
		
			

	}
	puts("-1");

}
