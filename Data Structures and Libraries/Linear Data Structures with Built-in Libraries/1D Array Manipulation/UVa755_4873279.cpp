#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
map<string,int> number;
map<char,char> mapa = { {'A','2'}, {'B','2'}, {'C','2'},
					   {'D','3'}, {'E','3'}, {'F','3'},
					   {'G','4'}, {'H','4'}, {'I','4'},
					   {'J','5'}, {'K','5'}, {'L','5'},
					   {'M','6'}, {'N','6'}, {'O','6'},
					   {'P','7'}, {'R','7'}, {'S','7'},
					   {'T','8'}, {'U','8'}, {'V','8'},
					   {'W','9'}, {'X','9'}, {'Y','9'}};
					   
int main(){
	int n,t,d = 0,size;
	string linha, finale;
	scanf("%d ",&n);
	rep(i,0,n){
		if(d >0)
			puts("");
		d++;
		number.clear();
		scanf("%d ",&t);
		rep(j,0,t){
			getline(cin,linha);
			finale.resize(8);
			int soma = 0;
			rep(k,0,linha.size()){
				if(soma == 3){
					finale[soma]='-';
					soma++;
				}
				if(linha[k] == '-')
					continue;
				else if(isalpha(linha[k]))
						finale[soma++]=mapa[linha[k]];
				else
					finale[soma++]=linha[k];
					
			}
			number[finale]+=1;
		}
		
		
		size = 0;
		for(auto it = number.begin();it!=number.end();it++){
			if(it->second > 1){
				cout << it->first<<" "<<it->second<<"\n";
				size++;
			}
			 
		}
		if(size ==0)
			cout << "No duplicates.\n";
	}
	
}
