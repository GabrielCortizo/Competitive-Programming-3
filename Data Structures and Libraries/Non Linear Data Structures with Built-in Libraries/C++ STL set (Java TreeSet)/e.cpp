#include<iostream>
#include<set>
#define rep(i,b,c) for(int i=(int)b;i<(int)c;i++)
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long int cont;
	int d,n,v;
	multiset<int> s;
	multiset<int>::iterator at,bt;
	while(scanf("%d",&d),d){
		s.clear();
		cont = 0;
		rep(i,0,d){
			scanf("%d",&n);
			rep(j,0,n){
				scanf("%d",&v);
				s.insert(v);
			
			}
		at = s.begin();
		bt = s.end();
		bt--;
		cont +=(*bt-*at);
		s.erase(at);
		s.erase(bt);
			
		
		}
		cout << cont<<"\n";
	}	
}
