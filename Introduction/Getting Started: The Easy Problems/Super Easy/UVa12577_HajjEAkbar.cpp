#include <bits/stdc++.h>
using namespace std;

int main(){
	int cont = 0;
	string a;
	while(cin >> a && a!="*"){
		cont++;
		printf("Case %d: ",cont);
		if(a == "Hajj")
			printf("Hajj-e-Akbar\n");
		else
			printf("Hajj-e-Asghar\n");
	}
	return 0;
}
