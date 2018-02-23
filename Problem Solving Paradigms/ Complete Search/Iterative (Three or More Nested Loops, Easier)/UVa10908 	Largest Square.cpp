#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int n,m;
char matrix[102][102];
bool valid(int i, int j,char c){
	if(i>=0 && i<n && j>=0 && j<m && matrix[i][j] == c)
		return true;
	return false; 

}

int main(){
	int q,a,b,t,d;
	bool flag;
	char c;
	scanf("%d ",&t);
	while(t--){
		scanf("%d %d %d ",&n,&m,&q);
		printf("%d %d %d\n",n,m,q);
		rep(i,0,n) rep(j,0,m)	scanf("%c ",&matrix[i][j]);
		
		for(int k = 0; k<q;k++){
			scanf("%d %d ",&a,&b);
			flag = 0;
			d = 1;
			c = matrix[a][b];
			for(int di = 1;di<=100 && !flag;di++){
				rep(x,a-di,a+di+1){
					rep(y,b-di,b+di+1){
						if(!valid(x,y,c)){
							flag = 1;
					//		cout << x<<" "<<y<<endl;
							break;
						}
					}
				
				}
				if(flag == 0)
					d = 1 +di*2;
			}
			printf("%d\n",d);
		
		} 
		
			
	}
}
