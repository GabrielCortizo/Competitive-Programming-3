#include <bits/stdc++.h>
#define rep(i,b,c) for(int i= (int)b;i<(int)c;i++)
using namespace std;
char matrix[101][101],mat[101][101],change[101][101];
bool par(int n){
	int soma = 0;
	rep(i,0,n)
		rep(j,0,n)
			if(mat[i][j] == matrix[i][j])
				soma++;	
	return  (soma == n*n);
}
void reflete(int n){
	rep(i,0,n)
		rep(j,0,n)
			change[n-1-i][j] = mat[i][j];
	rep(i,0,n)
		rep(j,0,n)
			mat[i][j] = change[i][j];
}
void rotate(int n){
	rep(i,0,n)
		rep(j,0,n)
			change[j][n-i-1] = mat[i][j];
	rep(i,0,n)
		rep(j,0,n)
			mat[i][j] = change[i][j];
}

int main(){
	map<int,int> mapa = {{1,90},{2,180},{3,270}};
	int n,solu,rot,d =1;
	while(scanf("%d ",&n)==1){
		rep(i,0,n){
			rep(j,0,n)
				scanf("%c ",&mat[i][j]);
			rep(j,0,n)
				scanf("%c ",&matrix[i][j]);
		}		
		solu = -1;rot = 0;
		if(par(n))
			solu = 1;
		/*rep(i,0,n){
			rep(j,0,n)
				cout << mat[i][j]<< " ";
			puts("");
		
		}	*/
		
		if(solu ==-1){
			rep(i,1,5){
				rotate(n);
				if(par(n)){
					rot = i;
					solu = 2;
					break;
				}
			}
		}
		/*rep(i,0,n){
			rep(j,0,n)
				cout << mat[i][j]<< " ";
			puts("");
		
		}	*/

		if(solu == -1){
			reflete(n);
			if(par(n))
				solu  = 3;		
		}
		if(solu == -1){
		
			rep(i,1,5){
				rotate(n);
				if(par(n)){
					rot = i;
					solu = 4;
					break;
				}
			}
	
		}
		printf("Pattern %d was ",d++);
		if(solu == 1)
			printf("preserved.");
		else if(solu ==-1)
			printf("improperly transformed.");
		else if(solu == 3)
			printf("reflected vertically.");
		else if(solu == 2)
			printf("rotated %d degrees.",mapa[rot]);
		else
			printf("reflected vertically and rotated %d degrees.",mapa[rot]);
			puts("");	
	
	}
}
