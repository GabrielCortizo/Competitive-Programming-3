#include <bits/stdc++.h>
#define rep(i,b,c) for(int i =b ;i<c;i++)
using namespace std;

int main(){
	string word;
	vector<string> dic;
	vector<string> ord;
	int last = 0;
	int cont = 0;
	while(cin >> word &&  word!="#"){
		dic.push_back(word);
		rep(i,0,word.size())
			word[i] = tolower(word[i]);
		sort(word.begin(),word.end());
		ord.push_back(word);
	}
	sort(ord.begin(),ord.end());
	sort(dic.begin(),dic.end());
	rep(i,0,dic.size()){
	
		cont = 0;
		word = dic[i];
		rep(j,0,word.size()) word[j] = tolower(word[j]);
		sort(word.begin(),word.end());
		vector<string>::iterator it;
		it  = lower_bound(ord.begin(),ord.end(),word);
		advance(it,1);
		
			if(*it==word)
				cont++;
				
			if(cont==0)
				cout << dic[i]<<endl;
	}	
}
				
