#include<bits/stdc++.h>
#define rep(i,b,c) for(int i =(int)b;i<(int)c;i++)
using namespace std;
/* Using the ideas:
	1st- the number they are ascending order and different , so if a = 0,b at least is a+1;
	2nd- if a is the first number it should save 5 spaces for the other;if b is the second it should save 4 spaces;
		- using the base case when we use i < n, no space had left, so i<n-1, 1 space is left alone , i<n-2 2 are the alone spaces and so on;
*/

int main(){
	int k,v,s,n;
	int vetor[50];
	while(scanf("%d",&n),n){
		if(s>0)puts("");s++;
		rep(i,0,n)
			scanf("%d",&vetor[i]);
		rep(a,0,n-5)
			rep(b,a+1,n-4)
				rep(c,b+1,n-3)
					rep(d,c+1,n-2)
						rep(e,d+1,n-1)
							rep(f,e+1,n)
								printf("%d %d %d %d %d %d\n",vetor[a],vetor[b],vetor[c],vetor[d],vetor[e],vetor[f]);
	
	
	}

	return 0;
}
