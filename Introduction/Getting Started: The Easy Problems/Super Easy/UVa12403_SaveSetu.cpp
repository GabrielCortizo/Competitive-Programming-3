#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	int n,b;
	cin >> n;
	int soma = 0;
	for(int i = 0;i<n;i++){
		cin >> a;
		if(a == "report")
			printf("%d\n",soma);
		else {
				cin >> b;
			soma +=b;
			}			
	}
	return 0;
}
