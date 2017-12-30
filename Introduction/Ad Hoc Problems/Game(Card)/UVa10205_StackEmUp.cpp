#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
map<int,string> naipe= { {0,"C"},{1,"D"},{2,"H"},{3,"S"}};
map<int,string> value = { {11,"J"},{12,"Q"},{13,"K"},{14,"A"}};
map<char,string> suit = { {'J',"Jack"},{'Q',"Queen"},{'K',"King"},{'A',"Ace"}};
map<char,string> tipe= { {'C',"Clubs"},{'D',"Diamonds"},{'H',"Hearts"},{'S',"Spades"}};
int main(){

	vector<vector<int>>vii;
	string cards,carta;
	int n,test,k,cont,l = 0;
	scanf("%d",&test);
	getline(cin,cards);
	while(test--){
		if(l>0)
			puts("");
		l++;
		vii.clear();
		scanf("%d ",&n);
		vector<int> vi;
		vector<string> finale,baralho;
		finale.resize(52);
		rep(i,0,n){
			/*getline(cin,cards);
			stringstream ss(cards);
			while(ss >> carta){
				vi.push_back(stoi(carta));
				
			}*/
			rep(j,0,52){
				scanf("%d ",&k);
				vi.push_back(k);
			}
			vii.push_back(vi);
			vi.clear();
			
			
		}
		
		rep(i,0,4){
		
			rep(j,2,15){
				
				if(j>=11){
					baralho.push_back(naipe[i]+value[j]);
				}
				else{
					if(j==10)
						baralho.push_back(naipe[i]+"0");
					else
						baralho.push_back(naipe[i]+to_string(j));
				}
			}
		}
		
		
		
		while(getline(cin,cards) && cards!=""){
			n = stoi(cards);
			
			rep(i,0,52){
				finale[i] = baralho[vii[n-1][i] -1];
			
			}
			baralho = finale;
			
		}
		rep(i,0,52){
			if(baralho[i][1] == '0')
				cout << "10";
			else if(isdigit(baralho[i][1]))
				cout << baralho[i][1];
			else
				cout << suit[baralho[i][1]];
					  
			cout <<" of "<<tipe[baralho[i][0]]<<"\n";
		}
			
	}
}
