#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
map<string,double> value = { {"jack",1.5}, {"king",4.5}, {"queen",3.5}, {"knight",2.5}};

int main(){
	int n,ncard,d =0;
	double need,actual;
	string card0,card1;
	scanf("%d",&n);
	rep(k,1,n+1){
		if(d>0)
				puts("");
			else d++;
			
		need = 0;
		actual = 0;
		scanf("%d",&ncard);
		rep(i,0,ncard){
			cin >> card0;
			if(card0 == "fool"){
				actual+=4.5;
				need++;
				continue;
			}
				
			cin >> card1>>card1;
			//cout << card0 << " "<<card1<<endl;
			if((card1 == "trumps" && (card0 == "one" || card0 == "twenty-one"))){
				actual+=4.5;
				need++;
			}
			else{
				if(value[card0])
					actual +=value[card0];
				else
					actual+=0.5;
			}
		
		}
		//ut << need<<" "<<actual<<endl;
		if(need ==0)
			need = 56;
		else if(need == 3)
			need = 36;
		else if(need ==2)
			need = 41;
		else 
			need = 51;
	
		
		printf("Hand #%d\n",k);
		if(need-actual>0)
			printf("Game lost");
		else
			printf("Game won");
		printf(" by %d point(s).\n",(int)abs(need-actual));
	
	}

}
