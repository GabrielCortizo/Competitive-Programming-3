#include<bits/stdc++.h>
#define rep(i,b,c) for(int i =b;i<c;i++)
using namespace std;
typedef pair<int,string> ii;
typedef vector<ii> vii;

int main(){
	int n,cont,re,maior;
	string a;
	ii par;
	vii vetor;
	scanf("%d",&n);
	rep(i,1,n+1){
		maior = -1;
		vetor.clear();
		rep(j,0,10){
			cin >> a >> re;
			if(maior > re)
				continue;
			else if(maior == re)
				vetor.push_back(ii(re,a));
			else{
				vetor.clear();
				vetor.push_back(ii(re,a));
				maior = re;
				}	
		}
		
		printf("Case #%d:\n",i);
		rep(j,0,vetor.size())
			cout << vetor[j].second<<"\n";
			
	}
}
