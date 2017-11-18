#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;

int main(){
	double parcela,owe,car,taxa,taxa2,loan,entrada;
	int meses,mes,n,m,old,novo;
	double taxs[101];
	bool got;
	
	while(true){
		scanf("%d%lf%lf%d",&meses,&entrada,&loan,&n);
	
		if(meses<0)
			break;
			
		rep(i,0,n){
			scanf("%d%lf",&novo,&taxa);
			rep(j,novo,meses+1)
				taxs[j] = taxa;
		}
		car = loan+entrada;
		car*=(1-taxs[0]);
		parcela = loan/meses;
		
		m = 0;
			
		rep(i,1,meses+1){
			if(loan<car){	
				break;
				}
			loan-=parcela;
			car*=(1-taxs[i]);
			m++;
				
		}
	
		if(m==1)
			printf("1 month\n");
		else
			printf("%d months\n",m);
	}
	
}
