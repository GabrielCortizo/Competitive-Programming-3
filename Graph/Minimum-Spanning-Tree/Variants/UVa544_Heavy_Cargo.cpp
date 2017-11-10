#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
#define x first
#define y second
using namespace std;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<int> vi;
vi ran,p;
int Find(int i) {return (i == p[i])?i:p[i] = Find(p[i]);}
bool same( int i,int j){return Find(i) == Find(j);}
void Union(int i,int j){
	i = Find(i); j = Find(j);
	if (i ==j) return;
	if(ran[i] >ran[j])
		p[j] = i;
	else{
		p[i] = j;
		if(ran[i] == ran[j])
			ran[j] ++;
	}
}
int main(){
	int v,e,a,b,c;
	int cont = 1;
	vector<iii>graph;
	iii par;
	map<string,int> mapa;
	string na,nb;
	int de = 0;
	while(scanf("%d%d",&v,&e) == 2 &&(v+e)!=0){
		graph.clear(); mapa.clear();
		b = 0;
		cont = 0;
		rep(i,0,e){
			cin >> na>>nb>>c;
			if(mapa[na]== 0)
				mapa[na] = cont++;
			if(mapa[nb] ==0)
				mapa[nb] = cont++;
			graph.push_back(iii(c,ii(mapa[na],mapa[nb])));	
		}
		cin >> na>>nb;
	
		a = mapa[na];
		b = mapa[nb];
		ran.assign(v+1,0); p.assign(v+1,0);
		rep(i,0,v+1)
			p[i] = i;
		sort(graph.begin(),graph.end());
		reverse(graph.begin(),graph.end());
		rep(i,0,e){
			par = graph[i];
			if(same(a,b))
				break;
			if(same(par.y.x,par.y.y)) continue;
			Union(par.y.x,par.y.y);
			c = par.x;
		
		}
		printf("Scenario #%d\n",++de);
		printf("%d tons\n\n",c);
	
	}


}
