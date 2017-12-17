#include <bits/stdc++.h>
#define rep(i,b,c) for(int i  = b;i<c;i++)
using namespace std;

bool palin(string &a){
	int n = a.size();
	rep(i,0,n/2){
		if(a[i]!=a[n-1-i])
			return false;
	}
	return true;
}

int main(){
	long long int val1,val2,n,val,c;
	string a,transf;
	scanf("%lld",&n);
	rep(i,0,n){
		c = 1;
		cin >> val;
		a = to_string(val);
		reverse(a.begin(),a.end());
		val+= stol(a);
		a = to_string(val);
		while(!palin(a)){
			c++;
			reverse(a.begin(),a.end());
			val+=stol(a);
			a = to_string(val);
		}
		printf("%lld %lld\n",c,val);
		
	}
	
}
