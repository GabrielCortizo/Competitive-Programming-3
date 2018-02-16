#include<bits/stdc++.h>
#define rep(i,b,c) for(int i =(int)b;i<(int)c;i++)
using namespace std;
int matrix[10][10],path[11],n,s;
bool visited[20],flag;
void dfs(int no,int p){
	if(p == s){
		printf("(1,");rep(i,0,s){printf("%d",path[i]+1);if(i<s-1)printf(","); }
		printf(")\n");
		flag = 1;
	}
	else{
		rep(i,0,n){
			if(matrix[no][i]&&!visited[i]){
				visited[i] = 1;
				path[p] = i;
				dfs(i,p+1);
				visited[i] = 0;
			}
		}
	}
} 

int main(){
	int d=0;
	while(scanf("%d %d",&n,&s) == 2){
		if(d!=0)puts("");
		rep(i,0,n)rep(j,0,n)scanf("%d",&matrix[i][j]);
		scanf("%d",&d);
		memset(visited,0,sizeof visited);
		flag = 0;visited[0] = 1;path[0] = 0;
		dfs(0,0);
		if(!flag)
			printf("no walk of length %d\n",s);	
	}

}
