#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;

int main(){
	int cont,mini,sol;
	vector<vector<string> > matrix;
	vector<string> vetor;
	string word,word2;
	while(cin >> word && word[0]!='#'){
		word2.clear();
		vetor.clear();
		
		if(word[0] == 'e'){
			
			mini = 1000000000;
			rep(i,0,matrix.size()){
				cont = 0;
				rep(j,0,matrix.size()){
					rep(k,0,5){
						if(matrix[i][k] != matrix[j][k])
							cont ++;
					}
				}
		//		cout << cont <<endl;
				if(cont < mini){
					mini = cont;
					sol = i+1;
				}
			}
			printf("%d\n",sol);
			matrix.clear();
			
			continue;
		}
		
		rep(i,0,word.size()){
			if(!isalpha(word[i]))
				continue;
		
			if(islower(word[i]))
				word2.push_back(word[i]);
				
			else{
				
				word2.push_back(word[i]);
			//	cout << word2<<" ";
				vetor.push_back(word2);
				word2.clear();
			
			}
		
		}
		sort(vetor.begin(),vetor.end());
		matrix.push_back(vetor);
	
	
	}

}
