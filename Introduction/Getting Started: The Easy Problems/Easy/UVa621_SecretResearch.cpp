#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
int main(){
	string a;
	string r;
	int n;
	scanf("%d",&n);
	while(n--){
		cin >> a;
		if( a == "1" || a == "4" || a == "78")
			r = "+";
		else if( a.size()<=2)
			r = "?";
		else if(a[0] == '9' && a[a.size()-1] == '4')
			r = "*";
		else if(a.substr(a.size()-2,2) == "35")
			r = "-";
		else
			r = "?";
		cout << r<<"\n";
	}
}
