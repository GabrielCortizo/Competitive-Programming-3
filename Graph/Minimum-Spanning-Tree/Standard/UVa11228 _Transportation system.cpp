/* 	Starboy
	02/11/2017
	t = 0.210s
*/
#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
#define x first
#define y second
using namespace std;
typedef pair<int,int> ii;
typedef pair<double,ii> iii;
typedef long long int lli;
typedef vector<int> vi;
double dist(ii a,ii b){

	int e = pow(abs(a.x - b.x),2);
	int f = pow(abs(a.y - b.y),2);
	
	return sqrt(e+f);
	
}
vi p;
int ran[4001];
int Find(int i){	return (i == p[i])?i:(p[i] = Find(p[i])); }
void Union(int i,int j){
	i = Find(i); j = Find(j); if(j == i)	return;
	if(ran[i] > ran[j])
		p[j] = i;
	else{
		p[i] = j;
		if(ran[i] == ran[j])
			ran[j]++;
		
	}
}
bool same(int i,int j){	return Find(i) == Find(j);}



double kruskal(int v,vector<iii> &G,int &si){

	memset(ran,0,sizeof(ran));
	p.clear();
	p.assign(v+10,0);	rep(i,0,v+10) p[i] = i;
	iii front;
	double mst = 0;	
	int s = 1;
	
	for(int i = 0;i<G.size();i++){
		
		if(!same(G[i].y.x,G[i].y.y)){
			mst+=G[i].x;
			s+=1;
			Union(G[i].y.x,G[i].y.y);
			
		}
	
	}
	si = s;
	return mst;
}

int main(){
	int n,v,e,a,b,c;
	vector <ii> vertex;
	vector <iii> gshort;
	vector<iii> glong;
	
	int lim;

	cin >> n;
	rep(i,0,n){
	glong.clear();gshort.clear();
		scanf("%d%d",&v,&lim);
		vertex.clear();
		rep(j,0,v){
			scanf("%d%d",&a,&b);
			vertex.push_back(ii(a,b));
			}
		int s  = 1;
		double d;
		rep(j,i,v){
			ii atual = vertex[j];
			
			rep(k,0,v){
				d = dist(atual,vertex[k]);
				glong.push_back(iii(d,ii(j,k)));
				
				if(d<=lim){
					gshort.push_back(iii(d,ii(j,k)));				
				}
			}
		
		}
		
		
		sort(glong.begin(),glong.end());
		sort(gshort.begin(),gshort.end()); 
		double a = kruskal(v,glong,s);
		double b = kruskal(v,gshort,s);
		lli a1 = (lli)round(a-b);
		lli b1 = (lli)round(b);
		printf("Case #%d: %d %lld %lld\n",i+1,v-s+1,b1,a1);
		

	}
	
	
	return 0;
}
