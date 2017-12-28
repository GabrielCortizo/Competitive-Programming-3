#include<bits/stdc++.h>
#define rep(i,b,c) for(int i =b;i<c;i++)
using namespace std;

int main(){
	double fat,total,perc,n,sum_total,sum_fat;
	int cont;
	string first;
	char c;
	int cal[] = {9,4,4,4,7};
	while(true){
		
		cont = total = fat = perc = 0;
		sum_fat =  sum_total = 0;
		bool is_perc = 0;
		
		while(cin >> first && first!="-"){
			perc = 0;
			total = fat = is_perc = 0;
			n = stoi(first.substr(0,first.size()-1));
			c = first[first.size()-1];

			if(c == 'g')
				fat = n*cal[cont%5];
				
			else if( c =='%'){
				fat=n;
				is_perc = 1;
				perc = fat;
			}
			
			else
				fat=n; 
			if(c!='%')
				total = fat;
		
					
			cont ++;
			rep(i,0,4){
				scanf("%lf%c",&n,&c);
				
				if(c == 'g')
					total+= n*cal[cont%5];
				else if( c =='%')
					perc+=n;
				else
					total +=n;
					
				cont++;
			}
			
			double fim =0;
							
			fim = total*100/(100-perc);
			sum_total +=fim;
			if(is_perc == 0)
				sum_fat+=fat;
			else{
				sum_fat += fim*fat/100;
				
			}
			
		
		}
			
			
		if(cont == 0)
			break;
		printf("%.0lf%%\n",round(sum_fat/sum_total*100));
		
	
	}
	
}


