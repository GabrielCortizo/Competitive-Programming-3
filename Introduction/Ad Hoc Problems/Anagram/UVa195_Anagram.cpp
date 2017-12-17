#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
bool compara(char a,char b){
	char al = tolower(a),bl = tolower(b);
	if(al!=bl)
		return al<bl;
	
	if(isupper(a) && islower(b))
		return true;
		
	return false;

}


int main(){
	map<string,bool> mapa;
	string a,b;
	int n;
	scanf("%d",&n);
	while(n--){
		cin >> a;
		sort(a.begin(),a.end(),compara);
		do{
			if(mapa[a])
				continue;		
			mapa[a] = 1;
			cout << a<<endl;
		
		}while(next_permutation(begin(a),end(a),compara));	
	
	}

}
