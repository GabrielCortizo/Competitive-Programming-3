#include<bits/stdc++.h>
#define x first
#define y second
#define rep(i,b,c) for(int i =(int)b;i<(int)c;i++)
#define clr(v,val) memset(v, val, sizeof(v))
using namespace std;
typedef pair<int,int> ii;
typedef pair<ii,int> iii;
typedef vector<int> vi;
 iii vet[24];
int crowd[30];
int best;
int esta,capa,ord;

int dfs(int pos){
	
	if(pos == ord)
		return 0;
		
	iii u = vet[pos];	
	bool valid = 1;
	int v1 =0,v2 =0;
	int p = u.y;
	v1 = dfs(pos+1);
	
	rep(i,u.x.x,u.x.y){
		crowd[i] += p;
		if(crowd[i]>capa)
			valid = 0;
	}
	if(valid)
		v2 = dfs(pos+1) + (u.x.y - u.x.x)*p;
	rep(i,u.x.x,u.x.y)
		crowd[i] -=p;
		
	return max(v1,v2);
}

int main(){
	int a,b,c;
	
	while(cin >> capa>>esta >>ord){
		if(!(esta||capa||ord)) break;
		clr(crowd,0);
		rep(i,0,ord){
		
			cin >> a >> b >>c;
			vet[i] = iii(ii(a,b),c);
		}	
		
		cout <<dfs(0)<<"\n";
	}
}
