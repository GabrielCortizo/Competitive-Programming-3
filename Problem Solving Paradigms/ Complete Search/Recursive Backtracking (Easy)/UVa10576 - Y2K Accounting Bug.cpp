#include<bits/stdc++.h>
#define rep(i,b,c) for(int i =(int)b;i<(int)c;i++)
using namespace std;
typedef long long int lli;
int main(){
	lli a,b,sum,sum2,maximo;
	int n;
	bool bad;
	while(scanf("%lld %lld",&a,&b)!=EOF){
	
		n = (1<<12); 
		maximo = -100000000;
		rep(i,0,n){
			bad = sum = 0;
			rep(j,0,5){
			
				if(i&(1<<j))
					sum+=a;
				else 
					sum-=b;
			}
			
			if(sum>=0) continue;
			
			sum2 = sum;
			rep(j,5,12){
				sum2 = (i&(1<<(j-5)))?(sum2-a):(sum2+b);
				if(i&(1<<j)){sum+=a;sum2+=a;}
				else {sum-=b; sum2-=b;}
				if(sum2>=0){bad = 1;break;}
			}
			if(bad)	continue;
			maximo = max(sum,maximo);
			
		}
		if(maximo >0)	
			cout <<maximo<<"\n";
		else
			cout << "Deficit\n";
	}	

}
