#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
char matrix[10001][10001],mat[10001][10001],change[10001][10001];

void rotate(int n){

	rep(i,0,n)
		rep(j,0,n)
			change[j][n-1-i] = mat[i][j];
			
	rep(i,0,n)
		rep(j,0,n)
			mat[i][j] = change[i][j];		
}

int numb(int n,int m){
	int soma = 0,hit,v = n-m+1;
	rep(k,0,v)
		rep(w,0,v){
			hit = 0;
			rep(i,0,m){
				rep(j,0,m){
					if(matrix[i+w][j+k] == mat[i][j]){
							
							hit++;
						}
				}
			}	
			if(hit == m*m)
				soma++;	
		}
	return soma;	

}

int main(){

	int n,m;
	while(scanf("%d %d ",&n,&m),(n||m)){
		rep(i,0,n)
			rep(j,0,n)
				scanf("%c ",&matrix[i][j]);
		rep(i,0,m)
			rep(j,0,m)
				scanf("%c ",&mat[i][j]);
		cout <<numb(n,m); 
		rep(i,0,3){
			rotate(m);
			cout << " "<<numb(n,m);
			}
		puts("");	 			
		
	}
}
