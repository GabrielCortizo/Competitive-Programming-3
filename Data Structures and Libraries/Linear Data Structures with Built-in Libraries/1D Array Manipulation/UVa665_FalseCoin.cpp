#include<bits/stdc++.h>
#define rep(i,b,c) for(int i=(int)b;i<(int)c;i++)
using namespace std;
int vetor[101],number[101];
int main(){
	int m,n,k,t,maximo,d = 0;
	int size,ind;
	char c;
	scanf("%d",&m);
	rep(i,0,m){
		if(d>0)
			puts("");
		d++;
		maximo = 0;
		memset(vetor,0,sizeof(vetor));
		scanf("%d %d ",&n,&k);
		rep(i,0,k){
			scanf("%d",&t);
			rep(j,0,t*2)
				scanf("%d ",&number[j]);
			scanf("%c ",&c);
			if(c == '=')
				rep(j,0,t*2){
					vetor[number[j]] = -1;
					}
			else
				rep(j,0,t*2){
					if(vetor[number[j]]!=-1){
						vetor[number[j]]++;
						if(vetor[number[j]]> maximo)
							maximo = vetor[number[j]];	
					}
				}
		}
		
		size = ind = 0;
		rep(i,1,n+1)
			if(maximo == vetor[i]){size++;ind = i;};
		if(size!=1)
			cout<<"0\n";
		else
			cout << ind<<"\n";

		//cout <<maximo<<" "<< size <<" "<<ind<<endl;
	}
}
