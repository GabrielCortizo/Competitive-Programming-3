#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;

int main(){
	int n,maior,menor,old,novo;
	scanf("%d",&n);
	printf("Lumberjacks:\n");
	rep(i,0,n){
		maior = menor = 0;
		scanf("%d",&old);
		rep(j,0,9){
			scanf("%d",&novo);
			if(novo >= old)
				maior+=1;
			if(novo<=old)
				menor+=1;
			old = novo;
		}
		if(maior ==9 || menor == 9)
			printf("Ordered\n");
		else 
			printf("Unordered\n");
	}
}
