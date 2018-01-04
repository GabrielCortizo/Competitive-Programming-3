#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int alunos[4][10001];
int suma[3];
int main(){
	int n,sumb,sumc,aluno,num,val,ind;
	scanf("%d",&n);
	rep(d,1,n+1){
		rep(i,0,4)
			memset(alunos[i],0,sizeof(int)*(10001));
		memset(suma,0,sizeof(int)*3);
		
		rep(i,0,3){
			scanf("%d",&num);
			rep(k,0,num){
				scanf("%d",&val);
				alunos[i][val] = 1;
				alunos[3][val]++;
			}
		}
		
		rep(i,0,3){
			
			rep(j,0,10001){
					if(alunos[i][j] && alunos[3][j] == 1 ) {
						suma[i]++;
					}
					else
						alunos[i][j] = 0;			
					
			}
		}
		
		int maximo = -1;
		rep(i,0,3){
			if(suma[i]>maximo)
				maximo = suma[i];
		}
		
		printf("Case #%d:\n",d);
		rep(i,0,3){
			if(suma[i] != maximo)
				continue;
			cout << i+1<<" "<<suma[i];
			rep(k,0,10001)
				if(alunos[i][k])
					cout << " "<<k;
			puts("");
		}

	}
}
