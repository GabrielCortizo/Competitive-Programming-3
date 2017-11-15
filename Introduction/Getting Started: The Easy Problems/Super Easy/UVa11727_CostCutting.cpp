#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a;
	vector<int> v;
	scanf("%d",&n);
	for(int i= 0;i<n;i++){
		v.clear();
		for(int j = 0;j<3;j++){scanf("%d",&a); v.push_back(a);}
		sort(v.begin(),v.end());
		printf("Case %d: %d\n",i+1,v[1]);
	}
	return 0;
}
