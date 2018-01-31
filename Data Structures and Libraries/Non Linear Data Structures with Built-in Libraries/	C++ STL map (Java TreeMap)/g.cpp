#include<bits/stdc++.h>
#define rep(i,b,c) for(int i= (int)b;i<(int)c;i++)
using namespace std;

int main(){
	string linha,a;
	map<string,double> mapa;
	int contador,n,d=0;
	scanf("%d ",&n);
	while(n--){
		if(d>0)
			puts("");
		d++;
		contador = 0;
		mapa.clear();
		while(getline(cin,linha) && linha!=""){
			mapa[linha]++;
			contador++;
		}
		for(auto it = mapa.begin();it!=mapa.end();it++){
			cout << it->first<<" ";
			printf("%.4lf\n",100*(double)(it->second/contador));
		
		}
	
	}
}
