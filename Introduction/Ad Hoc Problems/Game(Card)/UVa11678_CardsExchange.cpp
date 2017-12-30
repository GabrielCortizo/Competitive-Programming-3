#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
vector<int> pree(int a){
	int maximo,last = -1;
	vector<int> va;
	rep(i,0,a){
			scanf("%d",&maximo);
			if(maximo ==last)
				continue;
			last = maximo;
			va.push_back(maximo);
		
		}
	return va;	
}

int main(){
	int a,b,last,minimo;
	while(scanf("%d %d",&a,&b) ==2 , (a||b)){
		vector<int> va,vb;
		last = -1;
		
		va = pree(a);
		vb = pree(b);
		
		int eq =0 ,n  = (int)(va.size()<vb.size())?va.size():vb.size();
		last = 0;
		rep(i,0,a){
		
			while(last<vb.size() && va[i]>vb[last])
				last++;
		
			if(last < vb.size() && va[i] == vb[last]){
				
				eq++;
			}
			
		
		}
		cout << n-eq<<endl;
	
	}

}
