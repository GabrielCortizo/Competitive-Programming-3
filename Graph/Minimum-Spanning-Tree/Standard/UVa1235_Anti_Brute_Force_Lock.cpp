/*Starboy
	09/11/2017
	t = 0.0340s
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
bool same(int i,int j){return Find(i) == Find(j);}
void Union(int i,int j){
	i = Find(i); j = Find(j);
	if(i == j) return;
	if(ran[i] > ran[j])
		p[j] = i;
	else{
		p[i] = j;
		if(ran[i] == ran[j])
			ran[j]++;
	}
}
int dist(vi &a,vi &b){
	int d = 0;
	int mi,ma,m;
	rep(i,0,4){
		m  = (a[i]-b[i]);
		if(m <0)
			m+=10;
		ma = (b[i] - a[i]);
		if(ma<0)
			ma+=10;
				
		mi = min(ma,m);
		d += mi;
	}
	
	return d;
}  

int main(){
	int n,a,b,c,v,e,mst;
	int d;
	int v1;
	iii par;
	int mi = 1000000;
	vi help;
	help.assign(4,0);
	vi ajuda;
	vector<iii> graph;
	vector<vi> point;
	scanf("%d",&n);
	rep(j,0,n){
		mi = 1000000;
		graph.clear();
		mst = 0;
		scanf("%d",&v1);
		point.resize(v1+1);
		rep(i,0,v1){
			rep(k,0,4){
				scanf("%1d",&a);
				point[i].push_back(a);
			}
		}
		mi = dist(point[0],help);
		
		rep(i,0,v1){
			ajuda = point[i];
			rep(k,0,v1){
				if(k == i) continue;
				d = dist(ajuda,point[k]);
				graph.push_back(iii(d,ii(i,k)));
				mi = min(mi, dist(ajuda,help));
			}	
		}
		mst += mi;
		sort(graph.begin(),graph.end());
		point.clear();
		p.assign(v1+1,0);
		rep(i,0,v1+1)
			p[i] =i;
		ran.assign(v1+1,0);
		
		rep(i,0,graph.size()){
			par = graph[i];
			if(same(par.y.x,par.y.y)) continue;
			
			Union(par.y.x,par.y.y);
			mst+=par.x;
		}
		
		printf("%d\n",mst);
		
	}

}
