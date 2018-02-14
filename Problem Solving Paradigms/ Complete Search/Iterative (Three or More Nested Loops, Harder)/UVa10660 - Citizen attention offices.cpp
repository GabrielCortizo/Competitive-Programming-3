#include<bits/stdc++.h>
#define rep(i,b,c) for(int i= (int)b;i<(int)c;i++)
using namespace std;
int bil = 1000000000;
int sol[5];
int matrix[5][5];
int dist(int a,int b,int c,int d){
	return abs(a-c) + abs(b-d);

}
int main(){
	int n,t,mina,x,y;
	int sum;
	int hey;
	char s[20];
	scanf("%d",&t);
	while(t--){
		mina = bil;
		scanf("%d",&n);
		memset(matrix,0,sizeof matrix);
		rep(i,0,n){
			scanf("%d %d ",&x,&y);
			scanf("%d",&matrix[x][y]);
			}
			
		rep(a,0,25-4)
			rep(b,a+1,25-3)
				rep(c,b+1,25-2)
					rep(d,c+1,25-1)
						rep(e,d+1,25){
							hey = 0;
							rep(i,0,5)
								rep(j,0,5){
									sum = min(dist(a/5,a%5,i,j)*matrix[i][j],dist(b/5,b%5,i,j)*matrix[i][j]);
									sum = min(dist(c/5,c%5,i,j)*matrix[i][j],sum);
									sum = min(dist(d/5,d%5,i,j)*matrix[i][j],sum);
									sum = min(dist(e/5,e%5,i,j)*matrix[i][j],sum);
									hey+=sum;
								}
								if(mina > hey){
										mina = hey;
										sprintf(s,"%d %d %d %d %d",a,b,c,d,e);
									}
							}
		printf("%s\n",s);	
	
	}

}
