#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
bool flags[3001];
int main(){
	int a,b,n;
  while(scanf("%d ",&n) == 1){
  	scanf("%d ",&a);
    memset(flags,0,sizeof(bool)*(n+1));
    rep(i,0,n-1){
      scanf("%d ",&b);
    	flags[(int)abs(b-a)] +=1;
    	a = b;
    }
    a = 0;
    rep(j,1,n){
      if(flags[j] !=1){
      	a = 1;
        break;
      }
    }
    if(a == 1)
      	puts("Not jolly");
  	else
      	puts("Jolly");
  
  }
}