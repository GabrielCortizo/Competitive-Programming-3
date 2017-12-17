#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
bool palin(string &a){
	int n = a.size();
	int r,l;
	l = 0;
	r = n-1;
	//cout << n<<endl;
	//cout << a<<endl;
	rep(i,0,n){
	
		while(!(isalpha(a[l]))){
			l++;
			if(l>r)
				break;
		}
		while(!(isalpha(a[r]))){
			r--;
			if(l>r)
				break;
		}
		if(l>r)
			break;
		if(tolower(a[l]) != tolower(a[r])){
			//cout << l<< " "<<r<<endl;
			//cout << a[l]<<" "<<a[r]<<endl;
			return false;		
			}
		r--;
		l++;
	}
	
	return true;	

}

int main(){
	string a;
	while(getline(cin,a) && a!="DONE"){
		if(palin(a))
			puts("You won't be eaten!");
		else
			puts("Uh oh..");
	}

}
