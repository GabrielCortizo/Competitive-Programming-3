#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long long int a;
	string nome;
	
	scanf("%d",&n);
	
	for(int i = 0;i<n;i++){
		scanf("%lld",&a);
		a= (((a*567)/9 + 7492)*235)/47 - 498;
		a %=100;
		a/=10;
		printf("%d\n",(int)(abs(a)));
		
	}
	
}


