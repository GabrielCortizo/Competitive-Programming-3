#include<bits/stdc++.h>
#define rep(i,b,c) for(int i= (int)b;i<(int)c;i++)
int vetor[10001];
using namespace std;
int main(){
    int n,val;
    
    while(scanf("%d ",&n),n){
        
        rep(i,0,n){
            scanf("%d ",&vetor[i]);
        }
        vetor[n] = vetor[0];
        vetor[n+1] = vetor[1];
        val = 0;
        rep(i,1,n+1){
            if( vetor[i]>vetor[i+1] && vetor[i]>vetor[i-1])
                val++;
            if(vetor[i]<vetor[i+1]&&vetor[i]<vetor[i-1])
                val++;
        }
        printf("%d\n",val);
    }
}