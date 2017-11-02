/* 	Starboy
	02/11/2017
	t = 0.000s
*/
#include <bits/stdc++.h>
#define rep(i,b,c) for(int i= b;i<c;i++)
#define x first
#define y second
using namespace std;

typedef long long int lli;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<int> vi;
vi p,ran;
int Find(int i){	return (i == p[i])?i:p[i] = Find(p[i]); }
bool same(int i,int j){return Find(i) == Find(j);}
void Union(int i,int j){
	i = Find(i);j = Find(j);
	if(ran[i] > ran[j])
		p[j] = i;
	else {
		p[i] = j;
		
		if(ran[i] == ran[j])
			ran[j]++;
	
	}
	
}

lli kruskal(vector<iii> &G,int v){
	p.clear();
	p.assign(v+1,0);
	ran.assign(v+1,0);
	vi arestas;
	rep(i,0,v+1) p[i] = i;
	
	sort(G.begin(),G.end());
	int c = 0;
	
	rep(i,0,G.size()){
		
		if(same(G[i].y.x,G[i].y.y)){
			c = 1;
			arestas.push_back(G[i].x);		
		}
		
		else{
			Union(G[i].y.y,G[i].y.x);
		
		}
	
	
	}
	if(c ==1){
		rep(i,0,arestas.size()-1)
			printf("%d ",arestas[i]);
		printf("%d",arestas[arestas.size()-1]);
			}
	else 
		printf("forest");
	printf("\n");

}


int main(){
	int v,e,a,b,c;
	int mi,ma;
	vector<iii> G;
	while(scanf("%d%d",&v,&e) == 2 && (v+e) !=0){
		G.clear();
		rep(i,0,e){
			scanf("%d%d%d",&a,&b,&c);
			mi = min(a,b);ma = max(a,b);
			G.push_back(iii(c,ii(mi,ma)));
		}
			
		kruskal(G,v);		
		
	}
	return 0;
}


