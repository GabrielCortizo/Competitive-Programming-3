#include<bits/stdc++.h>
#define rep(i,b,c) for(int i= (int)b;i<(int)c;i++)
using namespace std;
int matrix[10][30];
int vetor[30];
map<string,int> mapa;

 int calculo(int ind,int size){
 	vector<int> C;
 	int base = matrix[ind][0],val,last;
 	last = matrix[ind][1];
 	C.push_back(last);
 
 	for(int i = 1+size*2;i>=3;i-=2){
 		val =  matrix[ind][i+1] - matrix[ind][i]+ 1;
 		
 		C.push_back(last*val);
 		last =val*last;
 	}
 	int cont = size-1;
 	val = matrix[ind][0];
 	last = 0;
 	for(int i = 3;i<size*2+3;i+=2){
 		val -= C[cont--]*matrix[ind][i];
 		
 	}
 	rep(i,0,size){
 		last += C[size-1-i]*vetor[i];
 		//cout << " >"<<C[i] << vetor[size-(i+1)]<<endl;
 	}
 	
	return last+val;
}

int main(){
	int n,s,size,ind;
	string linha;
	scanf("%d %d ",&n,&s);
	rep(i,0,n){
		cin >> linha;
		mapa[linha] = i;
		rep(j,0,3)
			scanf("%d",&matrix[i][j]);
		rep(j,3,matrix[i][2]*2+3){
			scanf("%d ",&matrix[i][j]);
		}
	}
	
	rep(i,0,s){
		cin >> linha;
		ind = mapa[linha];
		size = matrix[ind][2];
		rep(j,0,size)
			scanf("%d",&vetor[j]);
		
		cout <<linha<<"[";
		printf("%d",vetor[0]);
		rep(i,1,size)
			printf(", %d",vetor[i]);
		printf("] = %d\n",calculo(ind,size));
			
	}

}
