#include<bits/stdc++.h>
#define rep(i,b,c) for(int i= b;i<c;i++)
using namespace std;

int main(){
	double total,val;
	string a;
	int n,size,val2;
	char buffer[40];
	scanf("%d",&n);
	rep(t,1,n+1){
		total = 0;
		rep(i,0,12){
			scanf("%lf",&val);
			total+=val;
		}
		
		a = to_string((int)(total/12));
		size = (int)a.size();
		int modu = (size%3);
		printf("%d $",t);
		rep(i,0,modu){
			cout << a[i];
		}
		if(modu!=0)
			cout << ",";
		val2 = 0;
		rep(i,modu,size){
			cout << a[i];
			if(val2%3 == 2 && i!=size-1 )
				printf(",");
			val2++;
		}
		sprintf(buffer,"%.2lf",total/12-(int)total/12);
		rep(i,1,strlen(buffer))
			cout << buffer[i];
		puts("");
	}
	//printf("%.2lf",2.345);

}
