#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int main(){
	int n,val,rescue;
	bool flag;
	while(scanf("%d",&n),n){
		vector<int> vetor;
		rep(i,0,n){
			scanf("%d",&val);
			vetor.push_back(val);
		}
		sort(vetor.begin(),vetor.end());
		flag = 0;
		val = vetor[0];
		rep(i,1,n){
			if(vetor[i] - val> 200){
				flag = 1;
				break;
			}
			val = vetor[i];
		}
		rescue = (1422 - vetor[n-1])*2;
		if(rescue > 200)
			flag = 1;
	
	if(flag == 1)
		puts("IMPOSSIBLE");
	else
		puts("POSSIBLE");
	}

}
