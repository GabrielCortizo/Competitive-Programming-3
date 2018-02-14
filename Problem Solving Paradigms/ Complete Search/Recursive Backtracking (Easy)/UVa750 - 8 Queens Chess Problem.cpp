#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int row[8],a,b,lineCounter;
bool place(int r,int c){ // I'm thinking in place the r row in the c position
	
	rep(i,0,c)// look for all cols until the [..,c)
		if( (row[i] == r) || (c-i) == abs(row[i] - r ) )
			return false; 
			
	return true;
}
void backtrack(int c){
	if(c == 8 && row[b] == a){
		printf("%2d      %d",++lineCounter,row[0]+1);
		rep(j,1,8)	printf(" %d",row[j]+1);
		puts("");
	}
	for(int r= 0;r<8 && c<8;r++){
		if(place(r,c)){
			row[c] = r; backtrack(c+1);
		}
	}

}


int main(){
	int Tc;
	scanf("%d",&Tc);
	while(Tc--){
		scanf("%d %d",&a,&b);a--;b--;
		memset(row,0,sizeof row);lineCounter = 0;
		printf("SOLN       COLUMN\n");
		printf(" #      1 2 3 4 5 6 7 8\n\n");
		backtrack(0);
		if(Tc)printf("\n");
	}

}
