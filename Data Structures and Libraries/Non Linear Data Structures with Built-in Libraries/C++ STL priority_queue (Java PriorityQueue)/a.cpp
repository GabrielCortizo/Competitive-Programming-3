#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int vetor[3001];
typedef pair<int,int> ii;
int main(){
	priority_queue<ii> pq;
	vector<ii> vi;
	int a,b,t,menor = 100000;
	int times = 0;
	string linha;
	while(cin >> linha && linha!="#"){
		scanf("%d %d ",&a,&b);
		vetor[a] = b;
		if(b<menor)
			menor = b;
		vi.push_back(ii(a,b));
	}
	scanf("%d",&t);
	times = menor;
	while(pq.size()<t){
		rep(j,0,vi.size()){
			if(vi[j].second <= times){
				int v = vi[j].first;
				pq.push(ii(-vi[j].second,-vi[j].first));
				vi[j].second += vetor[v];
			}
		}
			times+=menor;
	}
	
	rep(i,0,t){
		cout << -1*pq.top().second<<"\n";
		pq.pop();
	}
	
}
