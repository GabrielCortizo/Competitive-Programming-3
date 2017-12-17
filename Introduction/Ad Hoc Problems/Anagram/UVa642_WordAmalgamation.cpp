#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
typedef pair<string,string> ss;
int main(){
	vector<string>sear;
	vector<ss>voca;
	string a,b;
	int cont = 0;
	while(cin >> a && a!="XXXXXX"){
		b = a;
		sort(b.begin(),b.end());
		voca.push_back(ss(a,b));
	}
	sort(voca.begin(),voca.end());
	while(cin >> a && a!="XXXXXX"){
		cont = 0;
		sort(a.begin(),a.end());
		rep(i,0,voca.size()){
			if(voca[i].second == a){
				cout << voca[i].first<<"\n";
				cont = 1;
			}
			
		}
		if(cont ==0)
				puts("NOT A VALID WORD");
			puts("******");		
	}
}
