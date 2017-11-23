#include<bits/stdc++.h>
#define rep(i,b,c) for(int i =b ;i<c;i++)
using namespace std;

int main(){
	int n,k,times,min,tomados;
	string curso;
	bool erro;
	map<string,bool> mapa;
	while(scanf("%d",&n)==1 && n!=0){
		scanf("%d",&k);
		mapa.clear();
		erro = 0;
		rep(i,0,n){
			cin >> curso;
			mapa[curso] = 1;
		}
		rep(i,0,k){
			cin >> times >> min;
			tomados = 0;
			rep(i,0,times){
				cin >> curso;
				if(mapa[curso])
					tomados++;
			}
			if(tomados<min)
				erro = 1;
		}
		if(erro)
			puts("no");
		else
			puts("yes");
	
	}

}
