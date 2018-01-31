#include <bits/stdc++.h>
#define rep(i,b,c) for(int i=(int)b;i<(int)c;i++)
using namespace std;

int main(){
	int n,mi,d=0,a,b,v,nb;
	vector<int> vg,vb;
	multiset<int> sg,sb;
	multiset<int>::iterator bt,gt;
	scanf("%d",&n);
	while(n--){
		if(d !=0) puts(""); d++;
		sg.clear();sb.clear();
		scanf("%d %d %d",&nb,&a,&b);
		rep(i,0,a){
			scanf("%d",&v);
			sg.insert(v);
		}
		rep(j,0,b){
			scanf("%d",&v);
			sb.insert(v);
		}
		while(sg.size()!=0 && sb.size()!=0){
			mi = min((int)sg.size(),(int)sb.size());
			vg.clear();vb.clear();
			for(int i = 0;i<mi && i < nb;i++){
				bt = sb.end();bt--;
				gt = sg.end();gt--;
				vg.push_back(*gt);
				vb.push_back(*bt);
				sb.erase(bt);
				sg.erase(gt);
			}
			rep(i,0,vb.size()){
			
				if(vb[i] > vg[i])
					sb.insert(vb[i]-vg[i]);
				
				else if(vg[i] > vb[i])
					sg.insert(vg[i]-vb[i]);
							
			}
		
		}
		
		if(sb.size()>0){
			cout << "blue wins"<<"\n";
			for(auto it = sb.rbegin();it!=sb.rend();it++)
				cout << *it<<"\n";
			}
		else if(sg.size() >0){
			cout << "green wins"<<"\n";
			for(auto it = sg.rbegin();it!=sg.rend();it++)
				cout << *it<<"\n";
			}
		else 
			cout << "green and blue died"<<"\n";
		
	}

}
