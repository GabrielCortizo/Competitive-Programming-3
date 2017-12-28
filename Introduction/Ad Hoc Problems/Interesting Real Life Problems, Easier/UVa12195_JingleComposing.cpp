#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
map<char,double> mapa = { {'W',1},{'H',2},{'Q',4},
 {'E',8},{'S',16},{'T',32},{'X',64} };
 
 int main(){
 	string linha;
 	double sum;
 	int s=0;
 	while(getline(cin,linha) && linha!="*"){
 		s =0;
		sum =0;
 		rep(i,0,linha.size()){
 			if(linha[i] == '/'){
 				//cout << sum<<endl;
 				if(sum ==1)
 					s++;
 				sum = 0;
 				continue;
 			}
 			sum+=1/mapa[linha[i]];
 		}
 		cout << s<<"\n";
 	
 	}
 }
