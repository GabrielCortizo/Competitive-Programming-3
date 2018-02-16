#include<bits/stdc++.h>
#define rep(i,b,c) for(int i =(int)b;i<(int)c;i++)
using namespace std;

int main(){
	vector<bool> vet;
	int h,n,t;
	scanf("%d",&t);
	
	while(t--){
		scanf("%d %d",&h,&n);
		vet.assign(h,0);
		rep(i,h-n,h)	vet[i] = 1;

		do{
			rep(i,0,h)
				cout <<vet[i];
			cout << "\n";
		}while(next_permutation(vet.begin(),vet.end()));
		if(t) puts("");
	}

}
