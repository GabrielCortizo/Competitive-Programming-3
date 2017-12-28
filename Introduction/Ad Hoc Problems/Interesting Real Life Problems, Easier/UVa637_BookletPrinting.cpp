#include<bits/stdc++.h>
#define rep(i,b,c) for(int i= b;i<c;i++)
using namespace std;

int main(){
	int n,r,left,turn;
	int cont;
	while(scanf("%d",&n),n){
	
		r = n%4;
		if(r)
			r = n/4+1;
		else
			r = n/4;
		cont = 4*r;
		if(n == 1){
			puts("Printing order for 1 pages:");
			puts("Sheet 1, front: Blank, 1");
		}
		else{
			turn = 0;
			left = 1;
			printf("Printing order for %d pages:\n",n);
			
			rep(i,1,r+1){
			
				
				rep(j,0,2){
				
					printf("Sheet %d, ",i);
				
					if(!turn){
						printf("front: ");
						if(cont > n)
							printf("Blank, %d\n",left);
						
						else
							printf("%d, %d\n",cont,left);
				
						}
					
					else {
						printf("back : ");
					
						if(cont > n)
							printf("%d, Blank\n",left);
						
						else
							printf("%d, %d\n",left,cont);
					
				
					}
			
					turn = (turn+1)%2;
					cont --;
					left++;
		
				}
			}
	
		}
	
	}
}
