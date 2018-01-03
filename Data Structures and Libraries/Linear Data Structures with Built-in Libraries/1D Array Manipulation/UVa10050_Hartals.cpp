#include<bits/stdc++.h>
#define rep(i,b,c) for(int i= (int)b;i<(int)c;i++)
using namespace std;
bool days[4000];
int parties[400];
int main(){
    int n,d,p;
    int total,soma = 0,hol;
    scanf("%d ",&n);
    rep(i,0,n){
        scanf("%d %d ",&d,&p);
        rep(j,0,p){
            scanf("%d ",&parties[j]);
        }
        memset(days,0,sizeof(bool)*(d+8));
        soma = 0;
        total = 0;
    while(total + 5 <d){
        days[total+5] = 1;
        days[total+6] = 1;
        total +=7;
        
    }    
    rep(j,0,p){
        total = -1;
        while(total + parties[j] <d){
            total += parties[j];
            if(days[total] == 0 ){
                days[total] = 1;
                soma++;
            }
            
        }
    }
    
    cout << soma<<endl;
  }
    
}