#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;

int main(){
	set<int> s;
	int n,m,v;
	while(scanf("%d %d",&n,&m),(n||m)){
		s.clear();
		rep(i,0,n){
			scanf("%d",&v);
			s.insert(v);
		}
		int soma =0;
		rep(i,0,m){
			scanf("%d",&v);
			auto it = s.find(v);
			if(it != s.end())
				soma++;
		}
		
	cout << soma<<"\n";	
	}

}
