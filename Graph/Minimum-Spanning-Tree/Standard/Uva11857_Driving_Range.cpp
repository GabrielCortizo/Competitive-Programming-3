/* Starboy
	09/11/2017
	t = 0.280s
*/
#include <bits/stdc++.h>
#define rep(i,b,c) for(int i =b ;i<c;i++)
#define x first
#define y second
using namespace std;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<int> vi;
vi ran,p;
int Find(int i){ return (i == p[i])?i:p[i] = Find(p[i]);}
bool same(int i, int j){ return Find(i) == Find(j);}
void Union(int i, int j){
	i = Find(i); j = Find(j);
	if (i == j) return;
	if(ran[i] > ran[j])
		p[j] = i;
	else {
		p[i] = j;
		if(ran[i] == ran[j])
			ran[j] ++;
	}
}

int main(){
	int v,e,a,b,c;
	int mst = 0;
	vector<iii> graph;
	iii par;
	while(scanf("%d%d",&v,&e) == 2 && (v+e)!=0){
		graph.clear();
		mst = 0;
		rep(i,0,e){
			scanf("%d%d%d",&a,&b,&c);
			graph.push_back(iii(c,ii(a,b)));
		}
		ran.assign(v+1,0); p.assign(v+1,0);
		rep(i,0,v+1)
			p[i] = i;
		sort(graph.begin(),graph.end());
		rep(i,0,e){
			par = graph[i];
			
			if(same(par.y.x,par.y.y)) continue;
			mst = par.x;
			v--;
			Union(par.y.x,par.y.y);
					
		}
		if(v ==1)
			printf("%d\n",mst);
		else
			printf("IMPOSSIBLE\n");
	
	}
	
}
