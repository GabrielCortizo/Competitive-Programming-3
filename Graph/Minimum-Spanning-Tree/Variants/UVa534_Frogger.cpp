/* 	Starboy
	09/11/2017
	t = 0.000s
*/
#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
#define x first
#define y second
using namespace std;
typedef pair<int,int> ii;
typedef pair<double,ii> iii;
typedef vector<int> vi;
vi p,ran;
int Find(int i){ return (i == p[i])?i:p[i] = Find(p[i]);}
bool same(int i,int j){return Find(i) == Find(j);}
void Union(int i, int j){
	i = Find(i); j = Find(j);
	if( i== j) return ;
	if(ran[i] > ran[j])
		p[j] = i;
	else{
		p[i]= j;
		if(ran[i] == ran[j])
			ran[j]++;
		}
	}
double dist(ii &a, ii &b){
	double dx = pow(a.x-b.x,2) + pow(a.y - b.y,2);
	return sqrt(dx);
}	
int main(){
	int n,a,b,v,e = 0,c = 0;
	double d,mst;
	iii par;
	ii ajuda;
	vector<iii> graph;
	vector<ii> point;
	
	while(scanf("%d",&n) == 1 && n!=0){
	
		e++;
		graph.clear(); point.clear();mst = -1;
		rep(i,0,n){
			scanf("%d%d",&a,&b);
			point.push_back(ii(a,b));
		}
		rep(i,0,n){
			rep(j,i,n){
				if( i == j) continue;
				d = dist(point[i],point[j]);
				graph.push_back(iii(d,ii(i,j)));
			}
		}
		v = graph.size();
		sort(graph.begin(),graph.end());
		p.assign(v+1,0);ran.assign(v+1,0);
		rep(i,0,v+1)
			p[i] = i;
			
		rep(i,0,graph.size()){
			par = graph[i];
			if(same(0,1))
				break;
				
			if(same(par.y.x,par.y.y)) continue;
			Union(par.y.x,par.y.y);
			mst = par.x;
		}
		printf("Scenario #%d\n",e);
		printf("Frog Distance = %.3lf\n\n",mst);
	
	}

}
