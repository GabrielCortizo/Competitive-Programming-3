/* 	Starboy
	02/11/2017
	t = 0.210s
*/

#include <bits/stdc++.h>
#define rep(i,b,c) for(int i =b ;i<c;i++)
using namespace std;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<int> vi;

vi ran,p;

int Find(int i){
	return (i == p[i])?i:(p[i] = Find(p[i]));
}
bool same(int i,int j){	return Find(i) == Find(j);}
void Union(int i,int j){	i = Find(i);j = Find(j);
		if(same(i,j))
			return;
		if(ran[i] > ran[j])
			p[j] = i;
			
		else {
			p[i] = j;
			if(ran[i] == ran[j])
				ran[j]++;
			
		}
	

}

int main(){
	int v,a,b,c,e;
	iii u;
	int mst,soma;
	int mi,ma;
	vector<iii> graph;
	while(scanf("%d%d",&v,&e) == 2 && (v+e)!=0){
		graph.clear();
		p.assign(v+1,0);
		ran.assign(v+1,0);
		rep(i,0,v+1)
			p[i] = i;
			
		soma = mst = 0;
		rep(i,0,e){
			scanf("%d%d%d",&a,&b,&c);
			mi = min(a,b);ma = max(a,b);
			graph.push_back(iii(c,ii(mi,ma)));
			//graph.push_back(iii(c,ii(ma,mi)));
			soma+=c;
		
		}
		sort(graph.begin(),graph.end());
		int s = 1;
		
		rep(i,0,e){
			u = graph[i];
			if (s == v)
				break;
			//	cout <<u.first<<endl;
			if(!same(u.second.first,u.second.second)){
				s+=1;
				Union(u.second.first,u.second.second);
				//cout << u.first<<endl;
				mst+=u.first;
			
			}
		
		}
		printf("%d\n",soma-mst);
		
		
	
	}
	
	return 0;

}
