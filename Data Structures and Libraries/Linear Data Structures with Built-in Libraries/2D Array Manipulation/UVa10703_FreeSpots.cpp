#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
bool matrix[501][501];
int main(){
	int n,m,t,x1,x2,y1,y2,soma;
	while(scanf("%d %d %d ",&n,&m,&t),(n||m||t)){
		memset(matrix,0,sizeof(matrix));
		rep(k,0,t){
			scanf("%d %d %d %d ",&x1,&y1,&x2,&y2);
			if(x1>x2)
				swap(x2,x1);
			if(y1>y2)
				swap(y1,y2);	
			rep(i,x1,x2+1)
				rep(j,y1,y2+1)
					matrix[i][j] = 1;
		
		}
		soma = n*m;
		rep(i,1,n+1)
			rep(j,1,m+1)
				soma-=(int)matrix[i][j];
		if(soma == 0)
			puts("There is no empty spots.");
		else if(soma ==1)
			puts("There is one empty spot.");
		else
			printf("There are %d empty spots.\n",soma);		
	}

}
