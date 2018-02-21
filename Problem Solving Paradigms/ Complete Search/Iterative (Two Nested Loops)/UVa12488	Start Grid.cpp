#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int start[26],ende[30];
int main(){
	int n,soma,ind;
	while(scanf("%d",&n) == 1){
		soma = 0;
		rep(i,0,n) 	scanf("%d",&start[i]);
		rep(j,0,n) scanf("%d",&ende[j]);
		rep(i,0,n){
			rep(j,0,n)
				if(ende[i] == start[j])
					ind = j;
			for(int d = ind;d>i;d--){
				swap(start[d],start[d-1]);
				soma++;
			}
		
		}
		
	printf("%d\n",soma);
	}

}
