#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
using namespace std;
int matrix[3][3];
int pos[3],sol[3];
int alfa[] = {0,2,1};/*
	A gente só precisa permutar os baldes;
	nesse caso usa uma matrix[3][3] representando o balde;	 e pos como uma rash, ex;
	   		i	0 1 2
	   pos:  	 
		2 		  a linha 0 representa o Clear	
		0 		  a linha 1 represeta o brown..
		1			........
	
	o alfa foi colocado, pra ordem de comparação ser primeiro o  b,depois o c e g,evitando mais trabalho
	outra soluão seria somar todos os resultados; cont = soma;  rep(i,0,3)cont-=matrix[i][pos[i]];
	e quem tiver o menor é o melhor;	


*/
map<int,char> mapa = {{0,'B'},{1,'G'},{2,'C'}};

int main(){
	int n,best,count;
	string ans,atual;
	while(scanf("%d",&matrix[0][0])==1){
		best = 1000000000;
		rep(i,1,3)scanf("%d",&matrix[0][i]);
		rep(i,1,3)rep(j,0,3)scanf("%d",&matrix[i][j]);
		rep(i,0,3)pos[i] = i;
		ans.clear();
		do {
			atual.clear();
			count = 0;
			rep(i,0,3)
				rep(j,0,3)
					if(j!=pos[i])
						count+=matrix[i][j];
						
			rep(i,0,3) atual.push_back(mapa[pos[i]]);					
				
			if(count<best){
				ans = atual;
				best = count;
				}
			else if(count == best)
				if(atual < ans)
					ans = atual;
		
		}while(next_permutation(pos,pos+3));
		cout << ans<<" "<<best<<"\n";		
	
	}

}
