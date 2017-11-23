#include <bits/stdc++.h>
#define rep(i,b,c) for(int i = b;i<c;i++)
using namespace std;
int main(){
	int n,cont = 0,atual;
	int vet[100];
	char c;
	string entrada;
	scanf("%d",&n);
	while(n--){
		atual = 0;
		memset(vet,0,sizeof vet);
		cont ++;
		cin >> entrada;
		//cout << entrada;
			rep(i,0,entrada.size()){
				if(entrada[i] == '+'){
					vet[atual]++;
					if(vet[atual] >255)
						vet[atual] = 0;
					}
					
				else if(entrada[i] == '-'){
					vet[atual]--;
					if(vet[atual] <= -1)
						vet[atual] = 255;
					}
					
				else if(entrada[i] == '>')
					atual = (atual+1)%100;
					
				else if(entrada[i] == '<')
					atual = (atual-1+100)%100;
					
			}
		
		printf("Case %d:",cont);
		rep(i,0,100)
			printf(" %02X",vet[i]);
		printf("\n");
		
	}
	
	return 0;

}
