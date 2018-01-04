#include<iostream>
#include<cstdio>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int vetor[12];
int main(){
	int n,total,d=1,val;
	while(scanf("%d",&n) == 1 && n>=0){
		total = n;
		printf("Case %d:\n",d++);
		rep(j,0,12){
			scanf("%d",&vetor[j]);
		}
		
		rep(j,0,12){
			//cout << total<<" "<<vetor[j]<<endl;
			scanf("%d",&val);
			if(total >= val){
				total-=val;
				puts("No problem! :D");
			}
			else
				puts("No problem. :(");
				
			total+=vetor[j];
			
		}
		
	}
}
