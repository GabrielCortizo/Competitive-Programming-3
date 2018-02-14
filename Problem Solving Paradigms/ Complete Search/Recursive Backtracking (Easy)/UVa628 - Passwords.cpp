#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;

vector<string> words;
string word;
int vetor[300],size;

void imprime(){

	rep(i,0,size){
		if(word[i] == '#')
			cout << words[vetor[i]];
		else
			cout << vetor[i];
	
	}
	puts("");

}
void rule(int c){
	if(c < size){
		if(word[c] == '#')
			rep(i,0,words.size()){
				vetor[c] = i;
				rule(c+1);
				}
		else{
			rep(i,0,10){
				vetor[c] = i;
				rule(c+1);
				}
		
		}
	
	}
	else
		imprime();

}

int main(){
	int n,m;
	while(scanf("%d",&n)==1){
		words.clear();
		rep(i,0,n) 	{cin >> word;words.push_back(word);}
		scanf("%d",&m);
		puts("--");
		rep(i,0,m){
			cin >> word;
			size = (int)word.size();
			rule(0);
		}
	}
}
