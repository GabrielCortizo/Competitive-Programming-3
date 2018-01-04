#include<bits/stdc++.h>
#define rep(i,b,c) for(int i= (int)b;i<(int)c;i++)
using namespace std;
int cars[10001];
int main(){
	int n,v,num,pos,suma;
	while(scanf("%d ",&n),n){
		suma = 0;
		bool erro = 0;
		memset(cars,-1,sizeof(int)*(n+1));
		rep(i,0,n){
			scanf("%d %d ",&num,&pos);
				pos+=i;
				if( (pos>=0 && pos <n) && cars[pos] == -1){
					cars[pos] = num;
					suma++;
					}
				else
					erro = 1;
			
			}	
		if(erro ==1 || suma!=n)
			puts("-1");
		else{
			cout << cars[0];
			rep(i,1,n)
				cout << " "<<cars[i];
			puts("");
		}
	
	
	}

}
