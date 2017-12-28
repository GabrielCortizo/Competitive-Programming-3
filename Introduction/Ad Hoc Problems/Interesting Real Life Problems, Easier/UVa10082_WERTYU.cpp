#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;

map<char,char> mapa;

int main(){

mapa['B'] = 'V';
mapa['C'] = 'X';
mapa['D'] = 'S';
mapa['E'] = 'W';
mapa['F'] = 'D';
mapa['G'] = 'F';
mapa['H'] = 'G';
mapa['I'] = 'U';
mapa['J'] = 'H';
mapa['K'] = 'J';
mapa['L'] = 'K';
mapa['M'] = 'N';
mapa['N'] = 'B';
mapa['O'] = 'I';
mapa['P'] = 'O';
mapa['Q'] = 'Q';
mapa['R'] = 'E';
mapa['S'] = 'A';
mapa['T'] = 'R';
mapa['U'] = 'Y';
mapa['V'] = 'C';
mapa['W'] = 'Q';
mapa['X'] = 'Z';
mapa['Y'] = 'T';
mapa['Z'] = 'Z';
mapa['0'] = '9';
mapa['1'] = '`';
mapa['2'] = '1';
mapa['3'] = '2';
mapa['4'] = '3';
mapa['5'] = '4';
mapa['6'] = '5';
mapa['7'] = '6';
mapa['8'] = '7';
mapa['9'] = '8';
mapa['/'] = '.';
mapa['.'] = ',';
mapa[';'] = 'L';
mapa['='] = '-';
mapa['-'] = '0';
mapa[']'] = '[';
mapa['['] = 'P';
mapa['\\'] = ']';
mapa['\''] = ';';
mapa[','] = 'M';
 	string linha;
	while(getline(cin,linha)){
		int n = linha.size();
		rep(i,0,n){
			if(isspace(linha[i]))
				printf(" ");
			else
				printf("%c",mapa[linha[i]]);
		
		}
		puts("");
	}
}	
