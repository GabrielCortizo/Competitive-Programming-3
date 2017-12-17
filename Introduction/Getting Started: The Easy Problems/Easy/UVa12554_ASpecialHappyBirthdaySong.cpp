#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;

int main(){
	double times;
	string a;
	vector<string> vs;
	vs.push_back("Happy");
	vs.push_back("birthday");
	vs.push_back("to");
	vs.push_back("you");
	vector<string> names;
	int n,count;
	scanf("%d",&n);
	rep(i,0,n){
		cin >> a;
		names.push_back(a);
	}
	times = ceil((double)n/16);
	int d=0,c= 0;
	rep(i,0,(int)times){
		
		rep(j,0,16){
			cout << names[c++]<<": ";c%=n;
			if(j==11){
				cout << "Rujia"<<"\n";
				d++;}
			else{
				cout << vs[d++]<<"\n";
				}
			d%=4;
		
		}
	
	}
	return 0;
}
