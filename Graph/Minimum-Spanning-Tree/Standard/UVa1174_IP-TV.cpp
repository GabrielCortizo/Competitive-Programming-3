#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
#define x first
#define y second
using namespace std;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<iii> vii;
typedef vector<int> vi;
vi p,ran;
int Find(int i){return (i == p[i])?i:p[i] = Find(p[i]); }
bool same(int i,int j){ return Find(i) == Find(j);}
void Union(int i,int j){i = Find(i); j = Find(j);
	if (i==j)	return ;
	if(ran[i] > ran[j])
		p[j] = i;
		
	else{
	
		p[i] = j;
		if(ran[i] == ran[j])
			ran[j]++;
	}
}

int main(){
	int n,c,v,e,mst;
	iii front;
	vii graph;
	string a,b;
	bool can  =0;
	map<string,int> mapa;
	
	scanf("%d",&n);
	rep(i,0,n){
		if (can) puts("");
		else 
			can = 1;
		graph.clear();
		mapa.clear();
		
		scanf("%d%d",&v,&e);
		rep(j,0,e){

			cin >> a >> b >> c;
			
			if(mapa[a] == 0)
				mapa[a] = mapa.size();
			if(mapa[b] == 0)
				mapa[b] = mapa.size();
	
			graph.push_back(iii(c,ii(mapa[a],mapa[b])));
		
		}
		
		mst = 0;				
		p.assign(v+1,0);
		ran.assign(v+1,0);
		rep(j,0,v+1)
			p[j] = j;	
		
		sort(graph.begin(),graph.end());
			
		rep(j,0,e){
		
			front = graph[j];
			if(same(front.y.x,front.y.y)) continue;
			Union(front.y.x,front.y.y);
			mst  += front.x;			
		
		}	
		printf("%d\n",mst);	
		
	}
	return 0;
}
