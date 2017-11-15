#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
typedef pair<string,string> ii;

int main(){
	vector<ii> vet;
	vet.push_back(ii("HELLO","ENGLISH"));
	vet.push_back(ii("HOLA","SPANISH"));
	vet.push_back(ii("HALLO","GERMAN"));
	vet.push_back(ii("BONJOUR","FRENCH"));
	vet.push_back(ii("CIAO","ITALIAN"));
	vet.push_back(ii("ZDRAVSTVUJTE","RUSSIAN"));
	int n;
	string a;
	int cont = 0;
	while(cin >> a && a!="#"){
		cont ++;
		bool find = 0;
		rep(i,0,6){
			if(vet[i].first == a){
				find = 1;
				cout <<"Case "<<cont<<": "<< vet[i].second<<"\n";
				break;
			}	
			
		}
		if(find==0)
			cout <<"Case "<<cont<<": "<<"UNKNOWN"<<"\n";
		
		}
		
		return 0;
	}	

