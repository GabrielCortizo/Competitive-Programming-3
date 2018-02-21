#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
char num[10];

int Tzero(int a){
	int used = 0,size = 0;
	while(a!=0){
		size++;
		if(a%10 == 0 || (used & 1<<a%10))
			return 0;
			
		used|=(1<<a%10);	
		a/=10;
	}
	return size;
}

bool check(int n){
	int cont = 0,used = 0,i = 0;
	int next;
	int size = Tzero(n);
	if(size == 0)	return false;
	
	sprintf(num,"%d",n);
	while(cont < size){
		next = num[i]-'0';
		used|=(1<<i);
		i = (i+next)%size;
		cont++;
	}
	
	if(used == (1<<size)-1 && i == 0)
		return true;
	return false;
}

int main(){
	int n,c = 1,resp;
	while(scanf("%d",&n),n){
		rep(i,n,1e+9){
		
			if(check(i)){
				resp = i;
				break;
			}
		
		}
		
		printf("Case %d: %d\n",c++,resp);
	
	
	}
	return 0;
}
