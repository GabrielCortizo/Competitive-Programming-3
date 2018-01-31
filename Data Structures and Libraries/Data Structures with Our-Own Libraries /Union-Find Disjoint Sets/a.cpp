/*Just a simple implementation of Union-Find*/

#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
typedef vector<int> vi;

class UnionFind{
	private:
		vi p,rank;
	public:
		UnionFind(int n){
			p.assign(n+1,0);rank.assign(n+1,0);
			rep(i,0,n+1) p[i] = i;
		}
		int findSet(int a){ return (a == p[a])?a:(p[a] = findSet(p[a])); }
		int isSame(int a,int b){
			return  findSet(a) == findSet(b);
		}
		void setUnion(int a,int b){
			a = findSet(a);b = findSet(b);
			if(a == b)	return ;
			if(rank[a] > rank[b])	p[a] = b;
			else {
				p[b] = a;
				if(rank[b] == rank[a])
					rank[b]++;
			}
		}
};
int main(){
	string line,linha;
	int a,b,n,t,d = 0,pos,neg;
	char c;
	scanf("%d ",&t);
	while(t--){
		if(d > 0) puts("");
		d++;
		scanf("%d ",&n);
		UnionFind u(n);
		pos = neg = 0;
		while(getline(cin,linha) && linha!=""){
			stringstream ss(linha);
			ss >>line;c = line[0];
			ss >> line;a = stoi(line);
			ss >> line;b = stoi(line);
			if(c == 'c')
				u.setUnion(a,b);
			else{
			
				if(u.isSame(a,b))	pos++;
				else neg++;
					
			}
				
		}
		cout << pos <<","<<neg<<"\n";		
	}
}
