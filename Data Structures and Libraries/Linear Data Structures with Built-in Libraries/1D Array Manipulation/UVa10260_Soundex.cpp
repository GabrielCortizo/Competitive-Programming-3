#include<bits/stdc++.h>
#define rep(i,b,c) for(int i =(int)b;i<(int)c;i++)
using namespace std;
map<char,int> mapa = {{'B',1},{'F',1},{'P',1},{'V',1},
 {'C',2},{'G',2},{'J',2},{'K',2},{'Q',2},{'S',2},{'X',2},{'Z',2},
 {'D',3},{'T',3},
 {'L',4},
 {'M',5},{'N',5},
 {'R',6}};

int main(){
    string linha;
    int last,ind;
    while(getline(cin,linha)){
        last = -1;
        rep(i,-1,linha.size()-1){
            if(last!=mapa[linha[i+1]]){
                if(mapa[linha[i+1]] != 0)
                    cout << mapa[linha[i+1]];
                last = mapa[linha[i+1]];
            }
        }
        puts("");
    }   
}