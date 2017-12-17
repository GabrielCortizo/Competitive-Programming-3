#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
int love(string & entrada){

	int valor;
	char c;
	
		valor = 0;
		rep(i,0,entrada.size()){
			c = tolower(entrada[i]);
			if(isalpha(c))
				valor +=(int)c - 'a'+1;
		}
		
		while(valor>=10){
			entrada = to_string(valor);
			valor = 0;
			rep(i,0,entrada.size())
				valor+=entrada[i]-'0';
		}
		return valor;
}


int main(){
	string a,b;
	int mi,ma;
	while(getline(cin,a)){
		getline(cin,b);
		mi = love(a);
		ma = love(b);
		//cout << mi<<"\n";
		//cout << ma<<"\n";
		if(mi>ma)
			swap(mi,ma);
		printf("%.2lf %%\n",(double)mi/ma*100);
	}

}
