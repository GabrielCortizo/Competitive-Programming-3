#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int vet[5],ans,n,cont;
int dfs(int effort){
	bool flag = 0;
	rep(i,0,n-1){
		if(vet[i] > vet[i+1]){
			swap(vet[i],vet[i+1]);
			dfs(effort+1);
			swap(vet[i],vet[i+1]);
			flag = 1;
		} 
	
	}
	
	if(!flag){
		if(effort < ans){
			ans = effort;
			cont = 0 ;
		}
		if(effort == ans)cont++;
	}
}


int main(){
	int d = 0;
	while(cin >> n && n){
		rep(i,0,n) cin >> vet[i];
		cont = 0;
		ans = 0xffffff;
		dfs(0);
		if(ans == 0)cont = 0;
		printf("There are %d swap maps for input data set %d.\n",cont,++d);
	}

}
