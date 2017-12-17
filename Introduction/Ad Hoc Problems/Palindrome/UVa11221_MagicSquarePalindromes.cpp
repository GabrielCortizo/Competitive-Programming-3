#include <bits/stdc++.h>
#include <stdio.h>
#include<string.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
int palin(char a[]){
	//cout << strlen(a)<<endl;
	int l = 0,r,n = strlen(a),cont = 0;
	l = 0;
	r = n-1;
	rep(i,0,n){
		if(l>r)
			 break;
			
		while(!isalpha(a[l])){
			l++;
			if(l>r)break;
		}
		while(!isalpha(a[r])){
			r--;
			if(l>r)
				break;
		}
		if(l>r)
			break;
			
		if(l == r)
			cont +=1;
		else if(a[l] != a[r])
			return -1;
		else
			cont+=2;
		r--;
		l++;
				
	}
	
	double val = (double)cont;
	val = sqrt(val);
	//cout << val<< " "<<(int)val<<endl;
	cont = (int)val;
	if(val>cont)
		return -1;
	else 
		return cont;

}

int main(){
	int n,ord = 0;
	char c[10010];
	scanf("%d",&n);
	
	
	rep(i,1,n+1){
		
		////scanf(" %[^\n]",c);
		scanf(" %[^\n]",c);
		//printf("%s\n",c);
		ord  = palin(c);
		
		printf("Case #%d:\n",i);
		
		if(ord == -1)
			puts("No magic :(");
		else
			printf("%d\n",ord); 
			
			
	}

}
