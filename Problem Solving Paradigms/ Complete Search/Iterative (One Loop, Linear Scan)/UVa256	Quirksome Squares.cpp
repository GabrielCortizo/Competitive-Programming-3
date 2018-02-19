#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
/*small results we can save all of them and them input in on*/

int main(){
	int ten,n,first,last,range;
	while(scanf("%d",&n) == 1){
		range = (int)pow(10,n);
		int ten =(int)pow(10,n/2);		
		rep(i,0,range-1){
			first = i/ten;
			last = i%ten;
			if( (first+last) == sqrt(i) ){
				if(n == 2)
					printf("%02d\n",i);
				else if(n == 6)
					printf("%06d\n",i);
				else if(n == 4)
					printf("%04d\n",i);
				else printf("%08d\n",i);
			}
		
		}
	
	}

}
