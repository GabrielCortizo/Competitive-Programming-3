#include<bits/stdc++.h>
#define rep(i,b,c) for(int i =(int)b;i<(int)c;i++)
using namespace std;
int matrix[1027][1027];

int main(){
	int a,b,c,t,n,d;
	scanf("%d",&t);
	while(t--){
		memset(matrix,0,sizeof matrix);
		scanf("%d %d",&d,&n);
		rep(i,0,n){
			scanf("%d %d %d",&a,&b,&c);
			rep(x,a-d,a+d+1)
				rep(y,b-d,b+d+1){
					if(x >=0 && y >=0 && x <=1024 && y<=1024)
						matrix[x][y]+=c;
				}
			}	
		c = -1;
		rep(i,0,1025)
			rep(j,0,1025)
				if(matrix[i][j]>c){
					a = i;
					b = j;
					c = matrix[i][j];
			}	
			
		printf("%d %d %d\n",a,b,c);
	}
}
