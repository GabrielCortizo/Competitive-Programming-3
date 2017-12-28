#include<bits/stdc++.h>
#define rep(i,b,c) for(int i= b;i<c;i++)
using namespace std;
int main(){
	int times[] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
	int n,s,total;
	string linha;
	scanf("%d",&n);
	cin.ignore();
	rep(i,1,n+1){
		total = 0;
		getline(cin,linha);
		s = linha.size();
		rep(j,0,s){
			if(isspace(linha[j]))
				total+=1;
			else
				total+=times[linha[j] - 'a'];
		}
		printf("Case #%d: %d\n",i,total);
	
	}

}
