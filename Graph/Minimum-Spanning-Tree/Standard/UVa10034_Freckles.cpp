/*	Starboy
	08/11/2017
	t = 0.000s

*/
#include <bits/stdc++.h>
#define x first
#define y second
#define rep(i,b,c) for(int i  = b;i<c;i++)
using namespace std;
typedef pair<double,double> ii;
typedef vector<ii> vii;
vector<bool> visited;
priority_queue<ii,vii,greater<ii>> pq;
double dist(ii a, ii b){
	double ax = pow(a.x - b.x,2);
	double ay = pow(a.y - b.y,2);
	return sqrt(ax + ay);

}
void process(int mkt,vector<vii> &graph){
	visited[mkt] = 1;
	ii par;
	
	rep(i,0,graph[mkt].size()){
		par = graph[mkt][i];
		
		if(!visited[(int)par.x])
			pq.push(ii(par.y,par.x));
	}

}

int main(){
	int n,v;
	double a,b,c,mst;
	bool can = 0;
	vector<vii> graph;
	vii points;
	ii par;
	
	scanf("%d",&n);
	rep(i,0,n){
		if(can) puts("");
		else can = 1;
		scanf("%d",&v);
		points.clear(); graph.clear();
		
		rep(j,0,v){
			scanf("%lf%lf",&a,&b);
			points.push_back(ii(a,b));
		}
		graph.resize(v);
		rep(j,0,v){
			par = points[j];
			rep(k,0,v){
				if(j == k) continue;
				
				double d = dist(par,points[k]);
				graph[j].push_back(ii(k,d));
				graph[k].push_back(ii(j,d));
					
			}	
		}
		
		mst = 0;	
		visited.assign(v+1,0);
		process(0,graph);	
	
		while(!pq.empty()){
			par = pq.top();pq.pop();
			if(!visited[(int)par.y]){
				mst+=par.x;process((int)par.y,graph);
		
			}
		}
		printf("%.2lf\n",mst);	
		
	}	
	return 0;	
}
