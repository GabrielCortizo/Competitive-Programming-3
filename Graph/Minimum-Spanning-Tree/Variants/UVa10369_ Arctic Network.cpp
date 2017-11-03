/* Starboy
	02/11/2017
	0.050s
*/

#include <bits/stdc++.h>
#define x first
#define y second
#define rep(i,b,c) for(int i  = b;i<c;i++)
using namespace std;
typedef pair<int,int> ii;
typedef pair<double,ii> iii;
typedef vector<int> vi;

vi p,ran;
int Find(int i){	return (i==p[i])?i:p[i] = Find(p[i]); }
bool same(int i,int j){ return Find(i) == Find(j); }
void Union(int i,int j){
	i = Find(i);j = Find(j);
	if(i == j) return ;
	if(ran[i] > ran[j])
		p[j] = i;
	else {
		p[i] = j;
		if(ran[i] == ran[j])
			ran[j]++;
	}
}
double dist(ii a,ii b){
	double v = pow(abs(a.x - b.x),2);
	double x = pow(abs(a.y-b.y),2);
	return sqrt(v+x);
	
}

int main(){
	vector<iii> G;
	ii atual;
	vector<ii> vertex;
	iii front;
	int n,s,v,a,b,c;
	double d;
	scanf("%d",&n);
	
	rep(i,0,n){
		scanf("%d%d",&s,&v);
		G.clear(); vertex.clear();
		p.clear();ran.clear();
		p.assign(v+1,0);
		ran.assign(v+1,0);
		p[v] = 1;
		
		rep(j,0,v){
			scanf("%d%d",&a,&b);
			vertex.push_back(ii(a,b));
			p[j] = j;
		}
		
		rep(j,0,v){
			atual = vertex[j];
			rep(k,0,v){
				d = dist(atual,vertex[k]);
				G.push_back(iii(d,ii(j,k)));
				
			}
		}
		sort(G.begin(),G.end());
		
		rep(k,0,G.size()){
			
			if(v == s)	break;
			
			if(same(G[k].y.x,G[k].y.y))	continue ;
			
			else {
				Union(G[k].y.x,G[k].y.y);
				d = G[k].x;
				v-=1;
				
			}
		
		}
		
		printf("%.2lf\n",d);
	
	
	}
	
	
	return 0;
}


