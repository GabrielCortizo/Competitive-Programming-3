#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
#define clr(v,i) memset(v,i,sizeof(v))
using namespace std;
typedef vector<int> vi;
int n;
bool memo[20];
bool isPrime(int v){

	rep(i,2,(int)(sqrt(v)+1)){
		if(v%i == 0) return false;
	}
	return true;
}

void dfs(int pos,vi &vet){
	
	//cout << pos<<endl;
	for(int i = 2;i<=n;i++){
		if( !memo[i] && isPrime(i+vet.back())) {
			vet.push_back(i);
			memo[i] = 1;
			dfs(pos+1,vet);
			vet.pop_back();
			memo[i] = 0;
		
		}
	}
	
	if(pos == n){
		if(isPrime(vet[0] + vet.back())){
			cout <<vet[0];
			rep(i,1,vet.size())
				cout <<" "<<vet[i];
			cout <<"\n";
		}
	
	}


}

int main(){
	int d = 0;
	vi vet;
	while(cin >> n){
		clr(memo,0);
		vet.clear();
		if(d) puts("");
		d++;
		vet.push_back(1);
		memo[1] = 1;
		printf("Case %d:\n",d);
		dfs(1,vet);
	
	}

}
