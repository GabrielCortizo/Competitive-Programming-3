#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;

int main(){
	int n,t,pago,friends;
	vector<string> nomes;
	string a,b;
	map<string,int> mapa;
	int e = 0;
	while(scanf("%d",&n)!=EOF){
		if(e++>0)
			puts("");
		nomes.clear();
		mapa.clear();
		rep(i,0,n){
			cin >> a;
			nomes.push_back(a);
			mapa[a] = 0;
		}
		rep(i,0,n){
			cin >> a;
			scanf("%d%d",&pago,&friends);
			if(friends ==0)
				continue;
			pago = pago/friends;
			mapa[a] -= pago*friends;
			rep(j,0,friends){
				cin >> b;
				mapa[b] +=pago;
			}	
		}
		rep(i,0,n)
			cout << nomes[i] << " "<<mapa[nomes[i]]<<"\n";			
			
	}

}
