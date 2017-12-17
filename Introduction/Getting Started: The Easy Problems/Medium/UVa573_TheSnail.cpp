#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
int main(){
	double high,up,down,tax;
	int day;
	double range;
	bool sucess;
	while(scanf("%lf%lf%lf%lf",&high,&up,&down,&tax) == 4){
		if(high+up+down+tax == 0)
			break;
		tax/=100;
		tax = tax*up;
				
		sucess = 0;
		range = 0;day = 1;
		while(true){
			range+=up;
			if(range>high){
				sucess =1;
				break;
			}
			
			up-=tax;
			if(up<=0)
				up = 0;
			range-=down;		
			if(range<0)
				break;
			day++;
		}
		if(sucess)
			printf("success on day %d\n",day);
		else
			printf("failure on day %d\n",day);
	
	}

}
