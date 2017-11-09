/*	Starboy
	08/11/2017
	t = 0.110s
*/
#include<bits/stdc++.h>
#define rep(i,b,c) for(int i =b ;i<c;i++)
#define x first
#define y second
using namespace std;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<int> vi;
vi ran,p;
int Find(int i){return (i==p[i])?i:p[i] = Find(p[i]);}
bool same(int i, int j){return Find(i) == Find(j);}
void Union(int i,int j){
	i = Find(i);j = Find(j);
	if( i== j) return;
	if(ran[i] > ran[j])
		p[j] =i;
	else{
		p[j] = p[i];
		if(ran[j] == ran[i])
			ran[j]++;
	}	
}
int main(){
	int n,a,b,c,v,e,air,mst;
	vector<iii> graph;
	iii par;
	
	scanf("%d",&n);
	rep(i,0,n){
		scanf("%d%d%d",&v,&e,&air);
		graph.clear();
		rep(j,0,e){
			scanf("%d%d%d",&a,&b,&c);
			graph.push_back(iii(c,ii(a,b)));
		}
		sort(graph.begin(),graph.end());
		p.assign(v+1,0);
		ran.assign(v+1,0);
		rep(j,0,v) 
			p[j]= j;
		mst = 0;
		rep(j,0,e){
			par = graph[j];
			if(same(par.y.x,par.y.y)|| par.x >=air) continue;
			v--;
			Union(par.y.x,par.y.y);
			mst +=par.x;
		
		}
		printf("Case #%d: %d %d\n",i+1,mst + v*air,v);	
			
	
	}

}
