#include<bits/stdc++.h>
#define X first
#define Y second
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
typedef pair<int,int> ii;
int bil = 10000000;
int main(){
	vector<ii> one,three;
	int m,v;
	int menor,sol;
	int par;
	while(scanf("%d",&m) == 1){
	
		one.clear();three.clear();
		rep(i,0,m)
			rep(j,0,m){
				scanf("%1d",&v);
				if( v == 1)
					one.push_back(ii(i,j));
				else if(v == 3)
					three.push_back(ii(i,j));
			}
			sol = -1;
			rep(i,0,one.size()){
				menor = bil;
				rep(j,0,three.size()){
					par = abs(one[i].X - three[j].X) + abs(one[i].Y - three[j].Y);
					if(par < menor)
						menor = par;
				}
				sol = max(sol,menor);
			}
		cout << sol << "\n";
	}

}
