#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
typedef pair<string,string> ss;

int main(){
	vector<ss> voca;
	vector<string> sear;
	string a,b;
	int n,d = 0,t,cont;
	scanf("%d",&t);
	cin.ignore();
	while(t--){
		if(d!=0)
			puts("");
		d++;
		voca.clear();sear.clear();
		cin.ignore();
		scanf("%d",&n);
		rep(i,0,n){
			cin >>a;
			b = a;
			sort(b.begin(),b.end());
			voca.push_back(ss(a,b));
		}
		while(cin >> a && a!="END")
			sear.push_back(a);
		rep(i,0,sear.size()){
			cont = 0;
			b = sear[i];
			cout << "Anagrams for: "<<b<<"\n";
			sort(b.begin(),b.end());
			rep(j,0,n){
				if(b == voca[j].second){
					cont++;
					printf("%3d) ",cont);
					cout <<voca[j].first<<"\n";
				}
				
			}
			if(cont ==0)
				cout <<"No anagrams for: "<<sear[i]<<"\n";
		
		}

	}
}
