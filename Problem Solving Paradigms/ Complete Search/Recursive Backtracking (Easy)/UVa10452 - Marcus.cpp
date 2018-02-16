#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int n,m,resp[10];
int ver[] = {0,-1,0};
int hor[] = {-1,0,1};
char matrix[10][10];

string palavra ("IEHOVA");

bool check(int x,int y,int op,int indi){
	x +=ver[op];
	y +=hor[op];
	
	char c = (indi == 6)?'#':palavra[indi];
		
		if(x< 0 || x >=n || y < 0 || y >=m)
			return false;
		
		if(matrix[x][y] == c)
			return true;
			
			
	return false; 
}

bool backtrack(int x,int y,int n){

	rep(i,0,3){
		if(check(x,y,i,n)){
			resp[n] = i;
			if(n == 6)
				return true;
	
			if(backtrack(x+ver[i],y+hor[i],n+1))
				return true;
			}
		
		}
		
	return false;

}

int main(){
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d ",&n,&m);
		rep(i,0,n)
			rep(j,0,m){
				scanf("%c ",&matrix[i][j]); if(matrix[i][j] == '@'){a = i;b = j;};
			}
			
		backtrack(a,b,0);
			
		rep(i,0,7){
		
			if(resp[i] == 0)
				printf("left");
			else if(resp[i] == 1)
				printf("forth");
			else
				printf("right");
			if(i<6)printf(" ");
		}
		puts("");
	}
	return 0;	
}
