#include<bits/stdc++.h>
using namespace std;
int vetor[101];
int main(){
	int n,t,in,p;
	string a;
	scanf("%d",&n);
	while(n--){
		p =0;
		scanf("%d",&t);
		for(int i = 1;i<=t;i++){
			cin >> a;
			if(a == "LEFT"){
				p--;
				vetor[i] = -1;
			}
			else if(a == "RIGHT"){
				p++;
				vetor[i] = +1;
				
			}
			else{
				cin >> a;
				scanf("%d",&in);
				p+=vetor[in];
				vetor[i] = vetor[in];
			}
		
		}
		printf("%d\n",p);
	}
}
