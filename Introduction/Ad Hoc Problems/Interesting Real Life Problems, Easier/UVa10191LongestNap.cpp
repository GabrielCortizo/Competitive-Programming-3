#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
#define x first
#define y second
using namespace std;
typedef pair<int,int> ii;
int main(){
	vector<ii> hora;
	int n,size,h,m,t,t2,start,h0;
	int c = 1;
	string linha;
	while(scanf("%d",&n) ==1){
		hora.clear();
		rep(i,0,n){
			scanf("%d:%d",&h,&m);
			t = h*3600 + 60*m; 
			scanf("%d:%d",&h,&m);
			t2 = h*3600 + 60*m;
			hora.push_back(ii(t,t2));
			getline(cin,linha);
		}
		sort(hora.begin(),hora.end());
		size = 0;
		h0 = 0;
		start = 36000;
		rep(i,0,n){
		
			if( (hora[i].x-start)>size ){
				size = hora[i].x -start;
				h0 = start;
			} 
			start = hora[i].y;
		}	
			
		if( (18*3600-start)>size ){
				size = 18*3600 -start;
				h0 = start;
			}	 
		size /=60;
		h = size/60;
		m = size%60;
		h0 /=60;
		if(h == 0)
			printf("Day #%d: the longest nap starts at %d:%02d and will last for %d minutes.\n",c,(h0/60),(h0%60),m);
		else
			printf("Day #%d: the longest nap starts at %d:%02d and will last for %d hours and %d minutes.\n",c,(h0/60),(h0%60),h,m);
		c++;
	}
	
}
