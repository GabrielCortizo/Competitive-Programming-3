#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
typedef vector<int> vi;

class UnionFind{
	public:	
	vi rank,p,size;
	UnionFind(int n){
		rank.assign(n+1,0);p.assign(n+1,0);size.assign(n+1,1);
		rep(i,0,n+1) p[i] = i;
	}
	int findSet(int i){ return (i == p[i])?i:(p[i] = findSet(p[i])); }		
	int isSame(int i,int j){ return findSet(i) == findSet(j);}
	int unionSet(int i, int j){
	
		i = findSet(i); j = findSet(j);
		
		if ( i == j) 	return size[i];
		
		if(rank[i] > rank[j]){
			p[j] = i;
			size[i]+=size[j];
			return size[i];
			}
		else {
		
			p[i] = j;
			size[j]+=size[i];
			if(rank[i] == rank[j])
				rank[j]++;
			return size[j];
		}
		
	}

};
int main(){
	int n,t;
	string a,b;
	scanf("%d ",&t);
	while(t--){
		scanf("%d ",&n);
		UnionFind u (n);
		int cont = 1;
		map<string,int> mapa;
		rep(i,0,n){
			cin >> a >> b;
			if(mapa[a] == 0)
				mapa[a] = cont++;
			if(mapa[b] == 0)
				mapa[b] = cont++;
			cout << u.unionSet(mapa[a],mapa[b])<<"\n";
		}
	
	
	
	}


}
