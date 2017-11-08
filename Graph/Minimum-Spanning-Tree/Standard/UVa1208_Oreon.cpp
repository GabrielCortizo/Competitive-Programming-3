/*	Starboy
	08/11/2017
	t = 0.000s
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
int Find(int i){return (i == p[i])?i:p[i] = Find(p[i]);}
bool same(int i,int j){return Find(i) == Find(j);}
void Union(int i, int j){
	i = Find(i);j = Find(j);
	if( i==j) return ;
	if(ran[i] > ran[j])
		p[j] = i;
	else{
		p[i] = j;
		if(ran[i] == ran[j])
			ran[j]++;	
	}
}
int main(){
	int n,e,v,a,b,c;
	int cont = 0;
	char ca;
	bool can = 0;
	iii front;
	vector<iii> graph;
	scanf("%d",&n);
	rep(i,0,n){
		//if(can)	puts("");
		//else can = 1;
		e = 0;
		cont = 1;
		graph.clear();
		scanf("%d",&v);
		rep(k,0,v){
			rep(j,0,v-1){
				scanf("%d%c%c",&c,&ca,&ca);
				if(c == 0) continue;
				graph.push_back(iii(c,ii(k,j)));
				e++;
			}
			scanf("%d",&c);
				if(c == 0)
					continue;
				graph.push_back(iii(c,ii(k,v-1)));
				e++;
		}
		sort(graph.begin(),graph.end());
		ran.assign(v+1,0);
		p.assign(v+1,0);
		rep(j,0,v+1)
			p[j] = j;
		printf("Case %d:\n",i+1);	
		rep(i,0,e){
			front = graph[i];
			if(same(front.y.x,front.y.y)) continue ;
			if(cont >= v) break;
			Union(front.y.x,front.y.y);
			printf("%c-%c %d\n",front.y.x+65,front.y.y+65,front.x);
			
		}	
	
	}
	return 0;
}

