#include<bits/stdc++.h>
#define rep(i,b,c) for(int i =(int)b;i<(int)c;i++)
#define x first
#define y second
using namespace std;
typedef pair<int,int> ii;
typedef pair<double,double> dd;
double inf = 10000000.0;
double capa, mperg;
vector<dd> vet;
double minimo = inf;

void getBest(double cost, double tank, int pos){

	if(pos == vet.size()-1){
		minimo = min(minimo,cost);
	
		return ;
	}
	
	double dist = (vet[pos+1].x-vet[pos].x);

	double cost2 = cost + (capa-tank)*vet[pos].y + 200;
	
	//cout << cost/100 <<" "<<pos<<" "<<dist<<" "<<tank*mperg<<endl;

	if(tank*mperg - dist < 0 || tank*2.0 <= capa  ){
		getBest(cost2, capa -dist/mperg, pos+1);
	}
	
	if(tank*mperg -dist >=0){
		getBest(cost, tank-dist/mperg, pos+1);
	}
	


}

int main(){
	int n;
	double tank,cost,dist;
	int d = 1;
	while(cin >> dist && dist>0){
		vet.clear();
		minimo = 10000000.0;
		cin >> capa >> mperg >> cost >> n;
		rep(i,0,n){
			double a,b;
			cin >> a >> b;
			vet.push_back(dd(a,b));
		}
		vet.push_back(dd(dist,0));
		
		getBest(cost*100,capa-vet[0].x/mperg,0);
		printf("Data Set #%d\n",d++);
		printf("minimum cost = $%.2lf\n",minimo/100);
	}
}
