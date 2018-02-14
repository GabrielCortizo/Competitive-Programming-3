#include<bits/stdc++.h>
#define rep(i,b,c) for(int i =(int)b;i<(int)c;i++)
using namespace std;
int row[8],vet[8];
int main(){
	int a,b = 1,maximo;
	bool work;
	while(scanf("%d",&vet[0])==1){
		maximo = 8;
		rep(i,1,8)	scanf("%d",&vet[i]);
		rep(i,0,8) row[i] = i+1;
		do {
		
			work = 0;
			for(int i = 0;!work && i<8;i++){
				rep(j,i+1,8){
					if( j-i == abs(row[i] - row[j])){
						work = 1;
						break;
					}
				}
			}
			if(work) continue;
			
			a = 0;
			rep(i,0,8)
				if(vet[i]!=row[i])
					a++;
			maximo = min(maximo,a);
		
		}while(next_permutation(row,row+8));
		printf("Case %d: %d\n",b++,maximo);
	}
}
