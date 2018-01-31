#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
typedef long long ll;
int main(){
	map<ll,ll> mapa;
	ll last,v,ma;
	int n,t;
	scanf("%d",&n);
	while(n--){
		mapa.clear();
		last = 0;
		ma = 0;
		ll size = 0;
		ll temp;
		scanf("%d",&t);
		rep(i,1,t+1){
			scanf("%lld",&v);
			temp = mapa[v];
			if(temp > 0){
				last = max(last,temp);
				size = i-last-1;
			}
			size++;
			mapa[v] = i;
			ma = max(ma,size);
			
		}
		cout << ma<<"\n";
	}
}
