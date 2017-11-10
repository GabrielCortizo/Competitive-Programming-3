/*	Starboy
	10/11/2017
	t = 0.040s
*/

#include <bits/stdc++.h>
#define x first
#define y second
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<int> vi;
vi p,ran;
int Find(int i){ return (i == p[i])?i:p[i] = Find(p[i]);}
bool same(int i, int j){ return Find(i) == Find(j);}
void Union(int i,int j){
	i = Find(i); j = Find(j);
	if( i == j) return;
	if(ran[i] > ran[j])
		p[j] = i;
	else {
		p[i] = j;
		if(ran[i] == ran[j])
			ran[j]++;
	}
}
int dist(ii a,ii b){
	double d =  pow(a.x-b.x,2) + pow(a.y - b.y,2);
	d = ceil(sqrt(d));
	return	(int) d;
}
int main(){
	int a,b,c,e,n,mst;
	int v;
	iii par;
	vector<iii> graph;
	vector<ii> point;
	scanf("%d",&n);
	rep(i,0,n){
		graph.clear(); point.clear();
		scanf("%d",&e);
		while(scanf("%d",&a) == 1 && a!=-1){
			cin >> b;
			point.push_back(ii(a,b));
		}
		v = point.size();
		rep(j,0,point.size()){
			rep(k,j+1,point.size()){
				c = dist(point[j],point[k]);
				graph.push_back(iii(c,ii(j,k)));
			}
		}
		sort(graph.begin(),graph.end());
		p.assign(v+1,0); ran.assign(v+1,0);
		rep(j,0,v+1)
			p[j] = j;
		
		rep(j,0,graph.size()){
		
			par = graph[j];
			if(v == e) break;
			if(same(par.y.x,par.y.y)) continue;
			Union(par.y.x,par.y.y);
			mst = par.x;
			v--;	
		}
		printf("%d\n",mst);
		
	}
	return 0;	
}
