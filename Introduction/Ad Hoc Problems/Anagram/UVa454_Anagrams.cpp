#include <bits/stdc++.h>
#include <string>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
typedef pair<string,string> ii;
int main(){
	vector<string> veta,vetb;
	string a,b;
	int n,d=0;
	scanf("%d",&n);
	cin.ignore();
	cin.ignore();
	while(n--){
		if(d>0)
			puts("");
		d++;
		veta.clear();
		vetb.clear();
		while(getline(cin,a) && a!=""){
			veta.push_back(a);
		}
		sort(veta.begin(),veta.end());
		
		rep(i,0,veta.size()){
			b = veta[i];
			sort(b.begin(),b.end());
			size_t s =  b.rfind(" ");
			if(s <=100)
				b = b.substr(s+1);
			vetb.push_back(b);	
		}
		rep(i,0,veta.size()){
			a = vetb[i];
			rep(j,i+1,veta.size()){
				if(a == vetb[j])
					cout << veta[i] <<" = "<<veta[j]<<"\n";
			
			}
		
		}
			
		
	}
	

}
