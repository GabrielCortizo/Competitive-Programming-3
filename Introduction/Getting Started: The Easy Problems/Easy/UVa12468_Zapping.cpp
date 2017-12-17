#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,p;
	while(scanf("%d%d",&a,&p),a!=-1){
		p = min((p-a+100)%100,(a-p+100)%100);
		cout << p<<"\n";	
	}
}
