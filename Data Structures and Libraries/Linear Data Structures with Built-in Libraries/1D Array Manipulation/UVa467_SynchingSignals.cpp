#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;

int main(){
    vector<int> sema;
    string linha,a;
    int total,i,d =1;
    bool bad = 0;
    while(getline(cin,linha)){
        sema.clear();
        stringstream ss(linha);
        total = 100;
        while(ss >> a){
            sema.push_back(stoi(a));
            if(stoi(a) < total)
                total = stoi(a);
        }
        
        for(i = total;i<=3601;i++){
                bad = 0;
                rep(j,0,sema.size()){
                    if( i%(sema[j]*2)>= (sema[j]-5)){
                        bad = 1;
                        break;
                    }
                } 
                if(!bad )
                    break;
        }
        if(i>3600)
            printf("Set %d is unable to synch after one hour.\n",d++);
        else
            printf("Set %d synchs again at %d minute(s) and %d second(s) after all turning green.\n",d++,i/60,i%60);
        
    }
}