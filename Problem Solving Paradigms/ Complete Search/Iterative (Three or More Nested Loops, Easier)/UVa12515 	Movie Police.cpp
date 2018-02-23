#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;

int main(){
	string word;
	vector<string> vetor;
	int a,b,max,ind,cont;
	scanf("%d %d ",&a,&b);
	rep(i,0,a) {cin >> word;vetor.push_back(word);}
	rep(k,0,b){
		max = -1;
		cin >> word;
		rep(i,0,a){
			int size = vetor[i].size()-word.size();
			if(size<0)continue;
			rep(k,0,size+1){
				cont = 0;
				rep(j,0,word.size()){
					if(vetor[i][k+j] == word[j])
						cont++;
				
				}
				if(cont > max){
					ind = i+1;
					max = cont;
				
				}
			
			}
			
		
		}
		printf("%d\n",ind);
	}
	
}
