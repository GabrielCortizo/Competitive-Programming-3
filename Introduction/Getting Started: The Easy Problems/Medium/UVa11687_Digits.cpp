#include <bits/stdc++.h>
using namespace std;
int main(){
	string entrada;
	int sold;
	int snovo;
	long long int vr;
	int cont ;
	bool done;
	while(cin >> entrada && entrada!="END"){
		cont = 1;
		snovo = entrada.size();
		//sold = stoi(entrada);
		sold = 0;
		if(entrada == "1"){
			puts("1");
			continue;

		}
		while(sold!=snovo){
			sold = snovo;
			snovo = to_string(snovo).size();
			cont ++;
		}

		printf("%d\n",cont);

	}
}
