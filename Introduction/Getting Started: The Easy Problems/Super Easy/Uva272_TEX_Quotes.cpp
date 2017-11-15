/* Starboy
	14/11/2017
	t = 0.000s
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	char c;
	bool b = 0;
	
	while(scanf("%c",&c) == 1){
		if(c == '"'){
		
			if(b){
				printf("\'\'");
				b = 0;
			}
			else{
				b = 1;
				printf("``");
			
			}
		}
	else 
		printf("%c",c);

	}
	return 0;
}
