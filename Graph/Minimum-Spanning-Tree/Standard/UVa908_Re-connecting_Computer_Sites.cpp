#include <bits/stdc++.h>
#define rep(i,b,c) for(int i =b ;i<c;i++)
#define x first
#define y second
using namespace std;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<iii> vii;
typedef vector<int> vi;
vi p,ran;
int Find(int i){ return (i==p[i])?i:p[i] = Find(p[i]);}
bool same(int i,int j){return Find(i) == Find(j);}
void Union(int i,int j){
	i = Find(i);
	j = Find(j);
	if( i == j)	return ;
	if(ran[i] > ran[j])
		p[j] = i;
	else {
		p[i] = j;
		if(ran[i] == ran[j])
			ran[j] ++;
	}
}
int main(){
	int n,a,b,c,k,m;
	int mst1,mst2;
	int mi,ma;
	iii front;
	vii graph;
	bool hy = 0;
	while(scanf("%d",&n) == 1){
		if(hy == 0)
			hy = 1;
		else
			printf("\n");
		
		mst1 = mst2 = 0;
		graph.clear();
		
		rep(i,0,n-1){
			scanf("%d%d%d",&a,&b,&c);
			mst1 += c;
		}
		scanf("%d",&k);
		rep(i,0,k){
			scanf("%d%d%d",&a,&b,&c);
			mi = min(a,b);ma = max(a,b);
			graph.push_back(iii(c,ii(mi,ma)));
			
		}
		scanf("%d",&m);
		
		rep(i,0,m){
			scanf("%d%d%d",&a,&b,&c);
			mi = min(a,b); ma = max(a,b);
			graph.push_back(iii(c,ii(mi,ma)));
		}
		p.clear();
		ran.clear();
		ran.assign(n+1,0);
		p.assign(n+1,0);
		rep(i,0,n+1)
			p[i] = i;
		
		sort(graph.begin(),graph.end());
		rep(i,0,m+k){
			front = graph[i];
			if(same(front.y.x,front.y.y)) continue;
			
			Union(front.y.x,front.y.y);
			mst2 += front.x;		
					
		}	
			
		printf("%d\n%d\n",mst1,mst2);	
	}
			
	return 0;
}

