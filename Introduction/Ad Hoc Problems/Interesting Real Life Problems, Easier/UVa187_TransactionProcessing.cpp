#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
typedef pair<int,double> ii;
int main(){
	map<int,string> contas;
	map<int,int> ordem;
	vector<vector<ii>> historico;
	vector<pair<int,double>> user = {{0,0}};
	int a,b,contador,n;
	double c;
	string nome;
	while(scanf("%3d",&n) ==1 && getline(cin,nome) && n!=0){
		contas[n] = nome;
	}
	contador = 1;
	
	while(scanf("%3d%3d%lf",&a,&b,&c),a){
		if(ordem[a] == 0 ){
			ordem[a] = contador++;
			user.resize(contador);
			historico.resize(contador);
			}
			n = ordem[a];
			c/=100;
			user[n].second += c;
			user[n].first = a;
			historico[n].push_back(ii(b,c));
	}
	rep(i,1,user.size()){
		if(user[i].second!=0){
			printf("*** Transaction %03d is out of balance ***\n",user[i].first);
			n = ordem[user[i].first];
			rep(j,0,historico[n].size()){
					printf("%03d ",historico[n][j].first);
					cout << contas[historico[n][j].first];
					rep(k,0,31-contas[historico[n][j].first].size())
						printf(" ");
					printf(" %9.2lf\n",historico[n][j].second);
			
			
			}
			printf("999 Out of Balance");
			nome = "Out of Balance";
			rep(k,0,30-nome.size())
				printf(" ");
			 printf(" %10.2lf\n\n",-user[i].second);
		
		}
	
	}
	

}
