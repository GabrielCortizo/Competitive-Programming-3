#include<bits/stdc++.h>
#define rep(i,b,c) for(int i =(int)b;i<(int)c;i++)
using namespace std;

bool teste(vector<vector<double> > & matrix, int n){

	double tempo, t;
	int soma;
	
	rep(i,0,matrix.size()){
		soma = 0;
		rep(j,1,4)
			soma+=matrix[i][j];
	
		tempo = (double)(matrix[i][0]*3600)/n;
		t = floor(tempo/soma);
		
		if(tempo >  t*soma + matrix[i][1]+matrix[i][2])
			return false;
		
	}
	
	return true;
}

int main(){
	vector<vector<double> > matrix;
	vector<double> vi;
	vector<int > resp;
	int n,c=1,s,f = 1;
	double v;
	while(scanf("%d",&n) == 1 && n!=-1){
		matrix.clear();
		resp.clear();
		rep(i,0,n){
			vi.clear();
			rep(j,0,4){
				scanf("%lf",&v);
				vi.push_back(v);
			}
			matrix.push_back(vi);
		}
		
		for(int i = 30;i<=60;i++){
		
		if(teste(matrix,i)){
			resp.push_back(i);
			//cout << i <<endl;
			}		
	}
	printf("Case %d:",c++);
	bool flag = 0,ine = 0;
	if(resp.size() == 0)
		printf(" No acceptable speeds.\n");
	
	else{
		resp.push_back(-232323);
		s = f = 0;
		while(f<resp.size()-1){
			ine = 0;
			if(resp[f]+1 == resp[f+1]){
				f++;
				ine = 1;
				}
				
			if(!ine || f == (int)resp.size()-1){
			
					if(s == f){
						if(!flag)
							printf(" %d",resp[s]);
						else
							printf(", %d",resp[s]); 
					}
					else{
						if(!flag)
							printf(" %d-%d",resp[s],resp[f]);
						else
							printf(", %d-%d",resp[s],resp[f]); 
					
					}
				
					s = ++f;
					
					flag = 1;
			}	
		}
		printf("\n");
	}	
 }	
	
	

}
