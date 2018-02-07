#include<bits/stdc++.h>
using namespace std;/*
	a = 1;
	b = a; ordem não decrescente
	remember if float a*b*c*d = a+b+c+d; but we are working with integers so the integer a = a*100, to use without .00, so we have
	since we are using times hundread we have to remember to compute
	with a correction division
*/

int main(){
	int a ,b,c,p;
	long long s,d;
	for(int a = 1;4*a<=2000;a++){
		for(int b = a;a+3*b<=2000;b++){
			for(int c =b;a+b+2*c<=2000;c++){
				 p =(long long)a*b*c;
				 s =(long long) a+b+c;
				 	 
				 if(p<=1000000 || (s*1000000)%(p-1000000))continue;
				 d = (s*1000000)/(p-1000000);
				 s+=d;
				 //p*=d;
				// cout << s <<" "<< c <<" "<< d<<endl;
				 if(s>2000 || c>d) continue;
				// if(p == s)
				 	printf("%0.2lf %0.2lf %0.2lf %0.2lf\n",(double) a / 100.0,(double) b / 100.0,(double) c / 100.0,(double) d / 100.0);
				 	
			
			}
		
		}
	
	
	}
						

}
