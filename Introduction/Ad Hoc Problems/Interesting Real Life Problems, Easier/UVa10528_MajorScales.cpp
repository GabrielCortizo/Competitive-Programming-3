#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;

int main(){
	vector<string> notes = { "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
	vector<string> tunes[12];
	int n,cont;
	string linha,outra;
	
	rep(i,0,12){
			cont = i;
			tunes[i].push_back(notes[cont]);
			
		rep(j,0,6){
		
			if(j == 2 )
				cont = (cont+1)%12;			
			else
				cont = (cont+2)%12;
				
			tunes[i].push_back(notes[cont]);
		}
	}

	while(getline(cin,linha) && linha!="END"){
		cont = 0;
		
		rep(i,0,12){

		stringstream ss(linha);
			while(ss >> outra ){
	
				n = -1;
				rep(k,0,7){
				
					if(tunes[i][k] == outra){

						n = 0;
						break;	
					}
				}
				if(n == -1)
					break;
			}
			if(n == -1 )
				continue;
			if(cont++ == 0)
				cout << notes[i];
			else
				cout <<" "<<notes[i];	
			
		}
		
		/*if(cont == 0)
			puts("");	*/
		puts("");
		
		}
	
}
