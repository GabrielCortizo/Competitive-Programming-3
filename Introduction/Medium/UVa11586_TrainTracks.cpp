#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int m ,f;
	char re;
	string s,b;
	scanf("%d",&n);
	getchar();
	for(int i = 0;i<n;i++){
		m = 0;
		f = 0;
		getline(cin,s);
				stringstream ss;
		ss<<s;
		while( ss >> b){
			for(int i = 0;i<b.size();i++)
				if(b[i] == 'M')
					m++;
				else f++;
			}
		if( m == f && (m!=1))
			printf("LOOP\n");
			else
				printf("NO LOOP\n");
		//cout << m<<f;
	}
}	
