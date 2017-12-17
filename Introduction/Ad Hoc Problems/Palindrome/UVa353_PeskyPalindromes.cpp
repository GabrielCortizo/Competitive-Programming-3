#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
map<string,bool> mapa;
bool palindrome(string a){
	//cout << a<<endl;
	int s = a.size();
	rep(i,0,s/2){
		if(a[i] != a[s-i-1])
			return false;
	}
	
	if(mapa[a] == 1)
		return false;
	//cout << "v"<<endl;
	//cout<<a<<endl;
	mapa[a] = 1;
	return true;
}

int main(){
	int left;
	int n;
	string entrada;
	while(cin >> entrada){
		left = 10000;
		mapa.clear();
		n = 0;
		rep(i,0,entrada.size()){
		//cout << "fuck";
			for(left = entrada.size()-1;left>=0;left--){
			
				if(i>left)
					break;
				
				if(entrada[i] == entrada[left])
					if(palindrome(entrada.substr(i,left-i+1)))
						n++;
					
			}
		
		}
		cout <<"The string \'"<<entrada<<"\' contains "<<n<<" palindromes.\n";	
		
	}
}
