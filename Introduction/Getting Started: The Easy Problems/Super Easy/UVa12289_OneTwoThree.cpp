#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
#define x first
#define y second
using namespace std;
typedef pair<string,int> ii;

int main(){
	int n;
	vector<ii> numb;
	numb.push_back(ii("one",1));
	numb.push_back(ii("two",2));
	numb.push_back(ii("six",6));
	numb.push_back(ii("ten",10));
	numb.push_back(ii("zero",0));
	numb.push_back(ii("five",5));
	numb.push_back(ii("four",4));
	numb.push_back(ii("nine",9));
	numb.push_back(ii("seven",7));
	numb.push_back(ii("eight",8));
	numb.push_back(ii("three",3));
	string a;
	int l0,lf;
	scanf("%d",&n);
	rep(i,0,n){
		cin >> a;
		if(a.size() == 3){ l0 = 0;lf = 3;}
		else if(a.size() ==4){l0 = 4;lf = 7;}
		else{l0 = 8;lf=10;}
	
		for(int j = l0;j<=lf;j++){
			int com = 0;
			rep(k,0,a.size())
				if(numb[j].x[k] == a[k])
						com+=1;
				
				if(com >= a.size()-1){
					printf("%d\n",numb[j].y);	
					break;
					}
			
		}
	}
	return 0;
}
