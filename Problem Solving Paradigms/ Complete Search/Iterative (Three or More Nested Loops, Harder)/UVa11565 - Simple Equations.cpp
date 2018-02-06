#include<bits/stdc++.h>
#define rep(i,b,c) for(int i=(int)b;i<(int)c;i++)
using namespace std;

int main(){
	int a,b,c,x,y,z,n;
	bool got;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d %d",&a,&b,&c);
		got = 0;
		for(int x = -100;x <=100 && !got; x++)
			if(x*x <= c)
				for(int y = -100; y <=100 && !got; y++)
					if(x*x + y*y <=c && y!=x)
						for(int z = -100;z<=101 && !got;z++ ){
							if(x!=z && y!=z && x*y*z == b && (x+y+z) == a && (x*x + y*y + z*z) == c){
								printf("%d %d %d\n",x,y,z);
								got = 1;
								}
							
						}
		
		
		if(!got)
			printf("No solution.\n");
			
	
	}


}
