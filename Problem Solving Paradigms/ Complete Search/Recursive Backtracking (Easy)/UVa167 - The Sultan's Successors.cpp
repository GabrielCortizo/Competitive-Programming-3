#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i < (int) c;i++)

/*
	Just calculate all possible 8 rows and then sum all positions , 
	see if it's the max 
*/
using namespace std;
int row[8];
int matrix[10][10],maximo;

bool place(int r,int c){
	rep(i,0,c){
		if(row[i] == r || (abs(c-i) == abs(row[i] - r)))
			return false;
	}
	return true;

}
void backtrack(int c){
	int soma = 0;
	
	if(c == 8){
		rep(i,0,8)
			soma+=matrix[row[i]][i];
			
		maximo = max(soma,maximo);
		return ;
	}
	
	rep(i,0,8)
		if(place(i,c)){
			row[c] = i;backtrack(c+1);
			}

}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		maximo = -1;
		rep(i,0,8) 
			rep(j,0,8)	
				scanf("%d",&matrix[i][j]);
				
		memset(row,0,sizeof(row));
		backtrack(0);
		printf("%5d\n",maximo);
	
	}

}
