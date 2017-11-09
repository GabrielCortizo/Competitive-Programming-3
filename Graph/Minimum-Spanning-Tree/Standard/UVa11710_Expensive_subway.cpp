/*	Starboy
	08/11/2017
	t = 0.540s	
*/
#include <bits/stdc++.h>
#define x first
#define y second
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<int> vi;
vi ran,p;
int Find(int i){return (i==p[i])?i:p[i] = Find(p[i]);}
bool same(int i,int j){return Find(i) == Find(j);}
void Union(int i,int j){
	i = Find(i);
	j = Find(j);
	if( i == j)	return ;
	if(ran[i] > ran[j])
		p[j] = i;
	else{
		p[i] = j;
		if(ran[j] == ran[i])
			ran[j] ++;
	}
}

int main(){
	int n,v,e,a,b,c,mst,cont;
	vector<iii> graph;
	map<string,int> mapa;
	iii par;
	string na,nb;
	while(scanf("%d%d",&v,&e) == 2 && (v+e)!=0) {
		mapa.clear();graph.clear();cont = 0;
		rep(i,0,v){
			cin >> na;
			mapa[na] = i;
		}
		rep(i,0,e){
			cin >> na >> nb >> c;
			a = mapa[na];
			b = mapa[nb];
			graph.push_back(iii(c,ii(a,b)));
		}
		cin >> na;
		p.assign(v+1,0);ran.assign(v+1,0);
		mst = 0;
		rep(i,0,v+1)
			p[i] = i;
		sort(graph.begin(),graph.end());
		rep(i,0,e){
			par = graph[i];
			if(same(par.y.x,par.y.y)) continue;
			v--;
			Union(par.y.x,par.y.y);
			mst +=par.x;		
		}
		if(v==1)
			printf("%d\n",mst);
		else
			printf("Impossible\n");
	}
	return 0;
}	
