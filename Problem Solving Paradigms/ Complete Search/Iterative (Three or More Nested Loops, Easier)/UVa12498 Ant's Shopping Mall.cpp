#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int n,m,matrix[51][51];
int steps(int l,int c){
	int dist = 1000;	
	rep(i,0,m){
		if(matrix[l][i] == 0){
			if(dist > fabs(i-c))
				dist = (int)fabs(i-c);
		}
	}
	return dist;
}

int main(){
	int t,cont,v;
	int mini;
	bool wall = 0;
	scanf("%d",&t);
	rep(c,1,t+1){
		wall = 0;
		mini = 1000000;
		scanf("%d %d",&n,&m);
		rep(i,0,n) rep(j,0,m) scanf("%1d",&matrix[i][j]);
	
		for(int i = 0;i<m && !wall;i++){
			cont = 0;	
			rep(j,0,n){
				v = steps(j,i);
				if(v == 1000){wall = 1;cont = -1;break;}
				cont +=v;
				
			}
			mini = min(mini,cont);
			
		}
		printf("Case %d: %d\n",c,mini);	
	}
}

