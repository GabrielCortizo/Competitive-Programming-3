#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
map<char,char> reve ={ {'A','A'},{'E','3'},{'H','H'},{'J','L'},{'L','J'},{'M','M'},{'O','O'},
{'2','S'},{'T','T'},{'U','U'},{'V','V'},{'Z','5'},{'Y','Y'},{'1','1'},{'S','2'},
{'3','E'},{'5','Z'},{'8','8'},{'J','L'},{'L','J'},{'M','M'},{'W','W'},{'X','X'}};

void palin(string &a){
	int n1 = a.size();
	int res = a.size()%2;
	bool pal =1;
	bool rev = 1;
	rep(i,0,n1/2){
		if((a[i] == 'O' || a[i] == '0') && (a[n1-1-i] == '0' ||  a[n1-i-1] == 'O'))
			continue;
			
		if(a[i] != a[n1-1-i])
			pal = 0;
		if(a[i]!= reve[a[n1-1-i]])
			rev = 0;
		if(!(pal||rev))
			break;
	}
	
	if(res == 1)
		rev = (a[n1/2] ==reve[a[n1/2]])?rev:0;
	
	
	if(!pal && !rev)
		cout << a <<" -- is not a palindrome.\n";
	else if(pal && !rev)
		cout <<a <<" -- is a regular palindrome.\n";
	else if(!pal && rev)
		cout << a<<" -- is a mirrored string.\n";
	else
		cout << a<<" -- is a mirrored palindrome.\n";
	puts("");
}
int main(){
	string a;
	while(cin >> a)
		palin(a);
	return 0;
}

