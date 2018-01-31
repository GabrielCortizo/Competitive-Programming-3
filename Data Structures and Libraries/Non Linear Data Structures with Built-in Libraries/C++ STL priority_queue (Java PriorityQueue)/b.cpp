#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;

int main(){
	int cont,a,b,c,n;

	while(scanf("%d",&n),n){
		priority_queue<int,vector<int>,greater<int> > pq;
		rep(i,0,n){
			scanf("%d",&a);
			pq.push(a);
		}
		cont = 0;
		rep(i,0,n-1){
			a = pq.top();pq.pop();
			b = pq.top();pq.pop();
			pq.push(a+b);
			cont+=(a+b);
		}
		cout << cont<<"\n";
	}


}
