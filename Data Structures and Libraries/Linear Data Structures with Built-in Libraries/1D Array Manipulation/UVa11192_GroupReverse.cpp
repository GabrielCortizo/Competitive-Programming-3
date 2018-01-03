#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;

int main(){
	int n;
	string linha;
	while(scanf("%d ",&n),n){

		getline(cin,linha);
		n = (int)linha.size()/n;
		for(int i = 0;i<linha.size();i+=n){
			for(int j = i+n-1;j>=i;j--)
				cout << linha[j];
		}
		puts("");
	}


}
