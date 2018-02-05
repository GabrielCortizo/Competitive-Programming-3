#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
typedef long long int lli;
int main(){
	 
	 int c;
	 lli in;
	 lli k,d,v,cont,n,n_pow;
	 vector<lli> vet;
	 scanf("%d ",&c);
	 while(c--){
	 	scanf("%lld",&n);
	 	vet.clear();
	 	
	 	rep(i,0,n+1){
	 		scanf("%lld",&v);
	 		vet.push_back(v);
	 	}
	 	scanf("%lld %lld",&d,&k);
	 	cont = d;
	   in = 1;
	   
	 	while(k > cont){
	 		cont +=d*(++in);
	 	}
	 	
	 	v = 0;
	 	n_pow = 1;
	 	
	 	rep(i,0,n+1){
			v += vet[i]*n_pow;
			n_pow*=in;
	 	}
	 	
	 	cout << v <<"\n";
	 }

}
