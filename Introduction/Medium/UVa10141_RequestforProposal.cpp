#include<bits/stdc++.h>
#define x first
#define y second
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
typedef pair<double,string> ii;
typedef pair<int,ii> iii;
int main(){
	vector<iii> vet;
	iii final;
	string a,b;
	int cont=0;
	double valor;
	int n,p,pm;
	while(scanf("%d%d",&n,&p)==2 && (n+p)!=0){
		final.x = -1e+8;
		final.y.x = -1e+8;
		cin.ignore();
		vet.clear();
		if(cont>0)
			puts("");
		cont++;
		for(int i = 0;i<n;i++)
			getline(cin,b);
			
		rep(i,0,p){
			getline(cin,a);
			
			scanf("%lf %d",&valor,&pm);
			cin.ignore();
			if(pm > final.x){
				final.x = pm;
				final.y.x = valor;
				final.y.y = a;
			}
			else if(pm == final.x && valor < final.y.x){
				final.x = pm;
				final.y.x = valor;
				final.y.y = a;

			}

			rep(j,0,pm)
				getline(cin,b);
				
			}

			printf("RFP #%d\n",cont);
			cout << final.y.y<<"\n";
				
				
	}

}
