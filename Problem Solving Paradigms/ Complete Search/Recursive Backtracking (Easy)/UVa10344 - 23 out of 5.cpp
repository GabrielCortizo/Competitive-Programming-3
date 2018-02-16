#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int vet[5],op[5];
bool backtrack(int n){
	bool b = 0;
	
	if(n == 4){
		int soma = vet[0];
		rep(i,0,4){
		
			switch(op[i]){
				case 0:
					soma+=vet[i+1];
					break;
				case 1:
					soma-=vet[i+1];
					break;
				case 2:
					soma*=vet[i+1];
					break;
			
			}
	
		}
		
		return (soma == 23)?true:false;
	}
	
	
	rep(i,0,3){
		op[n] = i;
		b = backtrack(n+1);
		if(b)
			return true;
	}
	return false;
}

int main(){
	bool b;
	int soma = 0;
	while(true){
		soma = 0;
		rep(i,0,5)	{scanf("%d",&vet[i]);soma+=vet[i];}
		if(soma == 0)	break ;
		sort(vet,vet+5);
		b = 0;
		do{
			b = backtrack(0);	
			if(b)break;
		
		}while(next_permutation(vet,vet+5));
		
		
		if(b)
			puts("Possible");
		else
			puts("Impossible");
	
	
	}
}
