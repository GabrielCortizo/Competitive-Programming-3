#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
#define pb push_back
using namespace std;
map<char,int> posi= {{'S',0},{'W',1},{'N',2},{'E',3}};
map<char,int> po = {{0,'S'},{1,'W'},{2,'N'},{3,'E'}};
map<char,int> naipe ={{'C',0}, {'D',1}, {'S',2}, {'H',3} };
map<char,int> valor = {{'T',10},{'J',11},{'Q',12},{'K',13},{'A',14}};
int ordena (string a,string b){
	int va,vb;
	if(a[0]!=b[0])
		return naipe[a[0]] < naipe[b[0]];
	
		if(isdigit(a[1]))
			va = a[1] - '0';
		else
			va = valor[a[1]];
			
		if(isdigit(b[1]))
			vb = b[1] - '0';
		else
			vb = valor[b[1]];
		
		return va<vb;
		
}

int main(){
	int pos;
	char c;
	string linha,card;
	while(scanf("%c ",&c)==1 && c!='#'){
		if(c == '#')
			return 0;
			
		vector<string> deq[4];
		pos = posi[c];

		rep(i,0,2){
			getline(cin,linha);
			rep(i,0,linha.size()/2){
				pos = (pos+1)%4;
				card = linha.substr(i*2,2);
				deq[pos].pb(card);
			
			}
		
		}
		
		rep(j,0,4){
			sort(deq[j].begin(),deq[j].end(),ordena);
			printf("%c:",po[j]);
			rep(i,0,deq[j].size())
				cout <<" "<<deq[j][i];
			puts("");
			
		}
		
	
	}
	
}
