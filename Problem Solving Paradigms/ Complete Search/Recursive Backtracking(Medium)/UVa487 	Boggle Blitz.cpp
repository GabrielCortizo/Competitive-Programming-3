#include<bits/stdc++.h>
#define rep(i,b,c) for(int i =(int)b;i<(int)c;i++)
#define clr(v,i) memset(v,i,sizeof(v))
#define x first
#define y second
using namespace std;
typedef pair<int,string> is;
map<is,bool> mapa;
bool visited[30][30];
char matrix[30][30];
int n;

bool isValid(int i, int j,char c){
	if(i>=0 && i<n && j>=0 && j<n)
		if(!visited[i][j] && matrix[i][j] > c )
			return true;

	return false;
}

void dfs(int i, int j, string &word){
	
	rep(k,-1,2){
		rep(l,-1,2){
			if(!l && !k) continue;
				if(isValid(k+i,j+l,word.back())){
					int u = k+i,v = l+j;
					visited[u][v] = 1;
					word.push_back(matrix[u][v]);
					dfs(k+i,j+l,word);
					visited[u][v] = 0;
					word.pop_back();
				}
		}
	}
	if(word.size()>2 && !mapa.count(is(word.size(),word)))
		mapa[is(word.size(),word)] = 1;
}

int main(){
	int t,d = 0;
	string word ="";
	cin >> t;
	while(t--){
		cin >> n;
		
		if(d) puts("");
		else d++;
		mapa.clear();
		clr(visited,0);
		rep(i,0,n)rep(j,0,n) cin >> matrix[i][j];
		
		rep(i,0,n)rep(j,0,n){ 
			
			word.push_back(matrix[i][j]);
			dfs(i,j,word);
			word.pop_back();
		
		}
		
		for( auto & it : mapa){
			cout <<it.x.y<<"\n";
		}
	}

}

