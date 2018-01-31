#include<bits/stdc++.h>
#define rep(i,b,c) for(int i= (int)b;i<(int)c;i++)
using namespace std;
int main(){
	map<string,int> mapa;
	string a,b;
	int n,pop,cont;
	
	while(scanf("%d",&n),n){
		mapa.clear();
		vector<string> v;
		rep(i,0,n){
			b = "";
			v.clear();
			rep(j,0,5){
				cin >> a;
				v.push_back(a);
			}
			sort(v.begin(),v.end());
			rep(i,0,5)
				b+=v[i];
			mapa[b]++;
		}
		pop = 0;
		cont = 0;
		for(auto it = mapa.begin();it!=mapa.end();it++){
			if(it->second == pop){
				pop = it->second;
				cont +=it->second;
			}
			else if(it->second > pop){
				pop = it->second;
				cont = it->second;
			}
				
		}
		cout << cont<<"\n";	
	}
}
