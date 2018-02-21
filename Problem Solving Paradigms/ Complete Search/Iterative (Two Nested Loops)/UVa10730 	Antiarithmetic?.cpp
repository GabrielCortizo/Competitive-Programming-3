#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int vet[100000];
bool neg[10009],pos[10006];

bool check(int n){
	map<int,bool> mapa;
	
	int a;
	
	rep(i,0,n-2){
			memset(neg,0,sizeof neg);memset(pos,0,sizeof pos);
			rep(j,i+1,n){
				a = vet[i] - vet[j];
				if(a >= 0){
					if(a%2 == 0)
						if(pos[(a/2)] == 1)
							return false;
					pos[a] = 1;
					
				}
				else {
					a*=-1;
					if(a%2 == 0)
						if(neg[(a/2)] == 1)
							return false;
					neg[a] = 1;
				
				
				}

		}
	}
	
	return true;

}

int main(){
	int n,a;
	
	while(scanf("%d : ",&n),n){
	
		rep(i,0,n) 	scanf("%d",&vet[i]);
		
		if(check(n))
			puts("yes");
		else
			puts("no");
	
	
	}
}
