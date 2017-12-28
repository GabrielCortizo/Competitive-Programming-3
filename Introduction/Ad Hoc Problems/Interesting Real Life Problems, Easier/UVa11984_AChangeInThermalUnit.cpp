#include<iostream>
#define rep(i,b,c) for(int i = b;i<c;i++) 
using namespace std;

int main(){
	double a,b,c;
	int n;
	cin >>n;
	rep(i,1,n+1){
		scanf("%lf %lf",&a,&b);
		c = a+ b*5/9;
		printf("Case %d: %.2lf\n",i,c);
	
	}

}
