#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;

int main(){
	int abc,fgh,used,temp,n,d = 0;
	bool bigger;
	bool got = 0;
	while(scanf("%d",&n) ,n){
		if(d >0)	puts("");
		d++;
		got = 0;
		for(fgh = 01234;fgh<=98765;fgh++){
			abc = fgh*n;
			used = (fgh < 10000);
			bigger = (abc >= 100000);
			if(bigger)	
				continue;
			temp = abc;	while(temp){ used |= (1<<temp%10); temp/=10;	}
			temp = fgh; while(temp){ used |= (1<<temp%10); temp/=10;	}
			if(used == (1<<10) -1){
				got = 1;
				printf("%.05d / %.05d = %d\n",abc,fgh,n);
			}
			
		}
		if(!got)
			printf("There are no solutions for %d.\n",n);
	
	}
}
/*
int main(){
	int vetor[10];
	int abc,fgh,n,d=0;
	bool got;
	while(scanf("%d",&n),n){
		if(d >0) puts("");
		d++;
		got = 0;
		rep(i,0,10)
			vetor[i] = i;
		do {
				abc = 0;
				fgh = 0;
				for(int i = 0,d = 10000;i<5;i++,d/=10){
					abc += vetor[i]*d;
					fgh += vetor[5+i]*d;
				}
				
				if(abc*n == fgh){
					got = 1;
					printf("%.05d / %.05d = %d\n",abc,fgh,n);
				
				}
			
			}while(next_permutation(vetor,vetor+10));
			
			if(!got) 	printf("There are no solutions for %d.\n",n);
		
		}
	}
*/
