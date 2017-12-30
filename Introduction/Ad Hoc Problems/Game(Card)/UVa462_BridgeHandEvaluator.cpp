#include <bits/stdc++.h>
#define pb push_back
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
map<char,int> value = {{'K',3},{'A',4},{'Q',2},{'J',1}};

int main(){

	string cards,card;
	while(getline(cin,cards)){
		if(cards == "")
			return 0;
		map<char,int> suit = {{'S',0},{'H',0},{'D',0},{'C',0}};
		map<char,int> fechado = {{'S',0},{'H',0},{'D',0},{'C',0}};
		vector<string> rostos;
		int trump = 0;
		int sum = 0;
		stringstream ss(cards);
		while(ss>>card){
			if(value[card[0]]){
				if(card[0] == 'A')
					fechado[card[1]] = 1;
			
				sum += value[card[0]];
				rostos.pb(card);
			}
			suit[card[1]] ++;
		}
		
		rep(i,0,rostos.size()){
			card = rostos[i];
			if(card[0] == 'K'){
				if(suit[card[1]]-1 == 0)
					sum--;
				if(suit[card[1]]-1 >=1)
					fechado[card[1]] = 1;
			}
			
			else if(card[0] == 'Q'){
				if(suit[card[1]]-1 <=1)
					sum--; 
				if(suit[card[1]]-1 >=2)
					fechado[card[1]] = 1;
			}
			else if(card[0] == 'J'){
				if(suit[card[1]]-1 <=2)
					sum--;
			
			}
		}
		char c;
		int maximo = 0;
		trump = sum;
		
		for(auto it = suit.rbegin();it!= suit.rend();it++){
			if(it->second <=1)
				sum+=2;
			else if(it->second==2)
				sum++;
			
			if(it->second > maximo){
				maximo = it->second;
				c = it->first;
			}
		}
		int close = 0;
		for( auto it =  fechado.begin();it!=fechado.end();it++){
			if(it->second){
				close ++;
			}
				
		}
			//cout << close << " "<<trump<<endl;

		if(sum<14)
			cout << "PASS"<<"\n";
		else if( close == 4 && trump >=16)
			cout <<"BID NO-TRUMP"<<"\n";
		else
		 	cout <<"BID "<< c<<"\n";
		
	}

}
