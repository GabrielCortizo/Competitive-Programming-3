#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
bool compara(char a,char b){
	char al = tolower(a);
	char bl=  tolower(b);
	if(a!=b)
		return a<b;
	if(isupper(a)&&!isupper(b))
		return true;
		
	return false;	
}

int main(){
	string a;
	map<string,bool> mapa;
	int n,d=0;
	scanf("%d",&n);
	while(n--){
	
		mapa.clear();
		cin >> a;
		sort(a.begin(),a.end(),compara);
		do {
			if(mapa[a])
				continue;
				
			cout << a<<"\n";
			mapa[a] = 1;
		
		}while(next_permutation(a.begin(),a.end(),compara));
		puts("");
	}
	

}
