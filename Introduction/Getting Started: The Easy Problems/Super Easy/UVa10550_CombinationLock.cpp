#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,soma;
	while(scanf("%d%d%d%d",&a,&b,&c,&d) == 4 &&(a+b+c+d)!=0){
		soma = 1080;
		soma+=((a-b+40)%40 + (c-b+40)%40 + (c-d+40)%40)*9;
		printf("%d\n",soma);
	}



	return 0;
}
