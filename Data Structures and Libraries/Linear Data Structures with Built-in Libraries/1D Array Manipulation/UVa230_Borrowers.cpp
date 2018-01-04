#include <bits/stdc++.h>
#define rep(i,b,c) for(int i= (int)b;i<(int)c;i++)
using namespace std;
typedef pair<string,string> ss;
map<string,int> mapa;
bool star(string & a,string &b){
	return mapa[a] < mapa[b];

}

int main(){
	string a,b,linha;
	int ind;
	vector<ss> vetor;
	vector<string> retorno;
	while(getline(cin,linha) && linha!="END"){
		ind = linha.find(" by ");
		a = linha.substr(ind+4);
		b = linha.substr(0,ind);
		vetor.push_back(ss(a,b));
	}
	sort(vetor.begin(),vetor.end());
	rep(i,0,vetor.size()){
		mapa[vetor[i].second] = i;
	}

	bool presente[(int)vetor.size()] = {};
	retorno.clear();

	while(cin >> a && a!="END"){
	
		if(a == "SHELVE"){
			sort(retorno.begin(),retorno.end(),star);
			rep(i,0,retorno.size()){
				int ind = mapa[retorno[i]];
				presente[ind] = 0;
				while(--ind >= 0){
					if(presente[ind] == 0)
						break;
				}
				if(ind < 0)
					cout << "Put "<<retorno[i]<<" first\n";
				else
					cout << "Put "<<retorno[i]<<" after "<<vetor[ind].second<<"\n";
			}
			retorno.clear();
			puts("END");
			continue;
		}
		getchar();
		getline(cin,b);
		if(a == "BORROW")
			presente[mapa[b]] = 1;
		
		else
			retorno.push_back(b);
			
	}
	
}
