#include<bits/stdc++.h>
#define rep(i,b,c) for(int i=(int)b;i<(int)c;i++)
using namespace std;
bool flag[52];
int main(){
    string a,b;
    int total,n;
    while(scanf("%d ",&n),n){
       string vetor[n];
        total = -1;
        rep(i,0,n){
            cin >> a >> b;
            rep(t,0,b.size()){
                total = (total+1)%n;
                while(flag[total]!=0)
                        total = (total+1)%n;
            }
            
            flag[total] = 1;
            vetor[total] = a;
        }
        cout << vetor[0];
        rep(i,1,n)
            cout <<" "<< vetor[i];
        puts("");
        memset(flag,0,sizeof(bool)*52);
    }
}