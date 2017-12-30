#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
int main(){
	int n,y,x;
	string card;
	scanf("%d",&n);
	rep(k,1,n+1){
		deque<string> pilha;
		vector<string> vinte; 
		rep(j,0,27){
			cin >> card;
			pilha.push_front(card);
		}
		y = 0;
		rep(j,0,25){
			cin >> card;
			vinte.push_back(card);		
		}
		rep(j,0,3){
			card = pilha.front();pilha.pop_front();
			if(isdigit(card[0]))
				x = card[0]-'0';
			else 
				x = 10;
			y+=x;
			rep(k,0,10-x)
				pilha.pop_front();	
		
		}
		rep(i,0,25)
			pilha.push_front(vinte[i]);
		rep(i,0,y-1)
			pilha.pop_back();
		cout << "Case "<<k<<": "<<pilha.back()<<"\n";
	}

}
