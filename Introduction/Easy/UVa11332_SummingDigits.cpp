#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
typedef long long int lli;
int main(){
	lli f;
	string a,b;
	
	while(cin >>a && a!="0"){
		while(a.size()>1){
			f = 0;
			rep(i,0,a.size())
				f+=a[i]-48;
			a = to_string(f);
		}
		cout << a<<"\n";
	}
	return 0;
}
