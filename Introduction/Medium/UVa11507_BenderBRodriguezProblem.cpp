#include <bits/stdc++.h>
#include <string.h>
#define rep(i,b,c) for(int i =b ;i<c;i++)
using namespace std;
bool inverte(char cur,char c2,char c1){

	if(cur == 'x' && c1 == '-') return true;
    if(cur == 'y' && c2 == 'y' && c1 == '+') return true;
    if(cur == 'z' && c2 == 'z' && c1 == '+') return true;
return false;

}

int main(){
	string c;
	char atual;
	bool signal;
	int l;
	while(scanf("%d",&l)==1 && l){
		signal = 1;
		if(l!=1){
		cin >> c;
		atual = c[1];
		if(c[0]=='-')
			signal = 0;
		if(c[0] == 'N')
			atual = 'x';
			}
		else
			atual = 'x';
		rep(i,2,l){
			cin >> c;
			if(c[0] == 'N')
				continue;
			if(inverte(atual,c[1],c[0]))
				signal = !signal;
			if(atual == 'x')
				atual = c[1];
			else if(atual == 'y' && c[1] == 'y')
				atual = 'x';
			else if(atual == 'z' && c[1] == 'z')
				atual = 'x';


		}
		(signal == 1)?printf("+"):printf("-");

			printf("%c\n",atual);
	}
}