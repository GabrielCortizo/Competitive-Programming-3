/* We use next_permutation to generate all test cases.
	look that the last condition it's necessary , cause if there are no constraits 
	the loop won't calculate all results
*/

#include<bits/stdc++.h>
#define rep(i,b,c) for(int i =(int)b;i<(int)c;i++)

using namespace std;

int main(){
	int cond[21][3],vetor[10];
	int m,n,a,b,cont,total;
	bool vero;
	while(scanf("%d %d",&n,&m),(n||m)){
		rep(i,0,n) vetor[i] = i;
		cont = total = 0;
		rep(i,0,m)
			scanf("%d %d %d",&cond[i][0],&cond[i][1],&cond[i][2]);
		
		
		do{
			
			rep(i,0,m){
				rep(j,0,n)
					if(vetor[j] == cond[i][0]){ a = j;break;}
				rep(j,0,n)
					if(vetor[j] == cond[i][1]){b = j;break;}
					
				a = (a>b)?a-b:b-a;
				
				vero = (cond[i][2] > 0)? a > cond[i][2]:a < -cond[i][2];
				if(vero)
					break;				
				if(i == m-1)
					cont++;
			}
			total++;
		}while(next_permutation(vetor,vetor+n));
		cont = (m == 0)?total:cont;
		printf("%d\n",cont);	
	}
}
