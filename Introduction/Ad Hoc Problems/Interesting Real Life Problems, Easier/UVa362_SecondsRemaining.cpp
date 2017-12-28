#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;

int main(){
	double total,sum,n,sum5,time = 1;
	double rate;
	while(scanf("%lf",&total),total){
		sum = 0;sum5=0;
		int round = 0;
		printf("Output for data set %d, %d bytes:\n",(int)time++,(int)total);
		while(sum!=total){
			round++;
			scanf("%lf",&n);
			sum5+=n;
			sum+=n;
			if(round%5==0){
				rate = sum5;
				if(sum5>0)
					printf("   Time remaining: %d seconds\n",(int)ceil( (total-sum)*5/rate));
				else
					printf("   Time remaining: stalled\n");
				sum5 = 0;
			}
		}
		printf("Total time: %d seconds\n\n",(int)round);
	}


}
