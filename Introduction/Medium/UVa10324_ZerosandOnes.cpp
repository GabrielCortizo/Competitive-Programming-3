#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
int main(){
	int l,r,n,help,mi,ma;
	bool wrong;
	int times = 0;
	char val;
	string a;
	while( cin >> a && a!=""){
		times++;
		scanf("%d",&n);
		wrong = 0;
		printf("Case %d:\n",times);
		while(n--){
			wrong = 0;
			scanf("%d%d",&mi,&ma);
			l = min(ma,mi);
			r = max(ma,mi);
			//cout << l << " "<<r;
			
			val = a[l];
			rep(i,l+1,r+1){
				if(a[l]!=a[i]){
					wrong = 1;break;
				}
			}
			if(wrong)
				printf("No\n");
			else 
				printf("Yes\n");
		}
	
	}
}
