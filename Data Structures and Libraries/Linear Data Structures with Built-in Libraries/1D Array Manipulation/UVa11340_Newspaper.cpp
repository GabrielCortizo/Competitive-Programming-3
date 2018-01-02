#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int main(){
	map<char,double> dic;
	int n,k;
  double soma,val;
  char c;
  string linha;
  scanf("%d ",&n);
  rep(i,0,n){
    dic.clear();
  	scanf("%d ",&k);
    rep(j,0,k){
    	scanf("%c %lf ",&c,&val);
      dic[c] = val;
    }
    scanf("%d",&k);
    getchar();
    soma = 0;
    rep(i,0,k){
    	getline(cin,linha);
      rep(j,0,linha.size()){
      	soma+=dic[linha[j]];
      }
    
    }
    printf("%.2lf$\n",soma/100);
  }
}
