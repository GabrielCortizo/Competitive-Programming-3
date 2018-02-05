#include<bits/stdc++.h>
#define rep(i,b,c) for(int i= (int)b;i<(int)c;i++)
#define X first
#define Y second
using namespace std;
typedef pair<int,int> ii;
typedef pair<string,ii> sii;

int main(){
	int t,n,q,p,l,h,cont,d = 0;
	string nome;
	vector<sii> vet;
	scanf("%d",&t);
	while(t--){
		scanf("%d ",&n);
		vet.clear();
		if(d >0) puts("");
			d++;
		
		rep(i,0,n){
			cin >> nome >> l >> h;
			vet.push_back(sii(nome,ii(l,h)));
		
		}
		scanf("%d",&q);
		rep(i,0,q){
			scanf("%d ",&p);
			cont = 0;
			rep(j,0,n){
				
				if(p >= vet[j].Y.X && p <= vet[j].Y.Y){
					nome = vet[j].X;cont ++;
				}
			}
			if(cont == 0 || cont > 1)
				cout << "UNDETERMINED\n";
			else
				cout << nome<<"\n";
		}
		
	}

}
