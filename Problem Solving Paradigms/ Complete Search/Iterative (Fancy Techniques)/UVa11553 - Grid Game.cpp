#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)/*
The idea insists in try all possible rearrangements using one row
and one col, the row will be ruled by the for
and the col by the change

*/
using namespace std;
const int bil =1000000000;
int matrix[8][8],change[8];
int main(){
	int n,t,minimo,sum;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		rep(i,0,n)
			rep(j,0,n)
				scanf("%d",&matrix[i][j]);
		minimo  = bil;
		rep(i,0,n)	change[i] = i;
		do {
			sum = 0;
			rep(i,0,n)
				sum+=matrix[i][change[i]];
			
			minimo = min(minimo,sum);
		
		
		}while(next_permutation(change,change+n));
		
		cout << minimo<<"\n";
	}



}
