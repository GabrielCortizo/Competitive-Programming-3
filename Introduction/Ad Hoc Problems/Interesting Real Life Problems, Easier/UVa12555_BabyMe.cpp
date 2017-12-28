#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;

int main(){
	int n,a,b;
	string linha;
	scanf("%d ",&n);
	rep(i,1,n+1){
	
		cin >> a >> linha;
		b = linha.size() > 3?linha[3] - '0':0;
		cout << "Case "<<i<<": "<<(a*0.5 + b*0.05)<<"\n"; 
	
	}	
	
}

