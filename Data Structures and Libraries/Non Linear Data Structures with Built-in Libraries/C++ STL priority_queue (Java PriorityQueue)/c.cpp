#include<bits/stdc++.h>
#define rep(i,b,c) for(int i= (int)b;i<(int)c;i++)
using namespace std;

int main(){
	int n,a,b,v;
	int ab,bb,bc;
	while(scanf("%d",&n)==1){
		ab = bb = bc = 1;
		queue<int> q;
		priority_queue<int> pq;
		stack<int> s;
		rep(i,0,n){
			scanf("%d %d",&a,&b);
			if(a == 1){
				q.push(b);
				pq.push(b);
				s.push(b);
			}
			else{
				if(q.size() == 0)
					ab = bb = bc = 0;
				else{
					if(q.front() == b)
						q.pop();
					else
						ab = 0;
					if(pq.top() == b)
						pq.pop();
					else
						bb =0;
					if(s.top() == b)
						s.pop();
					else
						bc = 0;
						
				}
			}		
		}
	
	if(ab+bb+bc>1)
		puts("not sure");
	else if(ab+bb+bc ==0)
		puts("impossible");
	else if(ab == 1)
		puts("queue");
	else if(bb == 1)
		puts("priority queue");
	else 
		puts("stack");
	}
}
