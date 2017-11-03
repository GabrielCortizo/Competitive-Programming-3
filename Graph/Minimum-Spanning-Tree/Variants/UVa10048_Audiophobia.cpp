#include <bits/stdc++.h>
#define x first
#define y second
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<int> vi;

vi p,ran;
int Find(int i){return (i == p[i])?i:p[i] = Find(p[i]);}
bool same(int i,int j){return Find(i) == Find(j);}
void Union(int i,int j){
	i = Find(i); j = Find(j);
	if(i == j)	return;
	if(ran[i] > ran[j])
		p[j] = i;
	else {
		p[i] = j;
		if(ran[i] == ran[j])
			ran[j] ++;
	
	}
}

void kruskal(int v,vector<iii> &G,int s,int e){
	p.clear();ran.clear();
	p.assign(v+1,0);
	ran.assign(v+1,0);
	rep(i,0,v+1)
		p[i] = i;
	int ma = -1;
	
	rep(i,0,G.size()){
		if(Find(s) == Find(e))
			break;
		else if(same(G[i].y.x,G[i].y.y)) continue;		
		
		if(G[i].x > ma)
			ma = G[i].x;
		Union(G[i].y.y,G[i].y.x);		
	
	}
			
	if(Find(e) == Find(s))
		printf("%d\n",ma);
	else
		printf("no path\n");	
	
}
int main(){
	int v,e,times,a,b,c;
	vector<iii> G;
	int cou = 1;
	bool hey =0;
	while(scanf("%d%d%d",&v,&e,&times) == 3 && (v+e+times)!=0){
	
		if(cou != 1)
			puts("");
		G.clear();
		rep(i,0,e){
			scanf("%d%d%d",&a,&b,&c);
			G.push_back(iii(c,ii(a,b)));
			G.push_back(iii(c,ii(b,a)));
		}
		sort(G.begin(),G.end());
		printf("Case #%d\n",cou++);
		rep(i,0,times){
			scanf("%d%d",&a,&b);
			kruskal(v,G,a,b);
		}
		
	}
	
	return 0;
}


