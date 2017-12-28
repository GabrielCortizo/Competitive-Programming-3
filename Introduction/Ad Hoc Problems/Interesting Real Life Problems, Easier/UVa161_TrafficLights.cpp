#include<bits/stdc++.h>
#define rep(i,b,c) for(int i= b ;i<c;i++)
#define x first
#define y second

using namespace std;
typedef pair<int,int> ii;
typedef vector<ii> vii;
int main(){
	int tempo,n,menor,zeros=0,h,m,s;
	vector<int> sinais;
	while (true){
	
		sinais.clear();
		menor = 100;
		scanf("%d",&n);
		if(n == 0)
			zeros ++;
			else
				{
				menor = n;
				sinais.push_back(n);
				while(scanf("%d",&n)==1,n) {
					sinais.push_back(n);
					if(menor>n)
						menor = n;
				}
			n = sinais.size();
			tempo = menor*2-1;
			
			while(tempo <= 5*3600){
				int green = 0;
				tempo++;
					rep(i,0,n){
						if(  (tempo)% (sinais[i]*2) < sinais[i]-5 )
							green++;
					}
				if(green == n)
					break;
			}
			if(tempo > 5*3600)
				puts("Signals fail to synchronise in 5 hours");
			else{
				s = tempo%60;
				m = tempo/60;
				h = m/60;
				m %=60;
				printf("%02d:%02d:%02d\n",h,m,s);
			}
		
		
		}
		if(zeros == 3)
			break;
		
		
	}


}
