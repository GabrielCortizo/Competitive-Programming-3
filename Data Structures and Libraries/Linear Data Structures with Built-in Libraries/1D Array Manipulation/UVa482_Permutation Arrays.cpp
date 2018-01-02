#include<bits/stdc++.h>
#define rep(i,b,c) for(int i = (int)b;i<(int)c;i++)
#define x first
#define y second
#define all(a) a.begin(),a.end()
using namespace std;
typedef pair<int,string> is;

int main(){
  string a,b;
  vector<is> vetor;
  int n,d = 0;
  scanf("%d",&n);
  getchar();
  rep(i,0,n){
    if(d>0)
      puts("");
    d++;
    getchar();
    vetor.clear();
    getline(cin,a);
    getline(cin,b);
    stringstream sx(a);
    stringstream sy(b);
    while(sx >> a && sy >> b ){
      vetor.push_back(is(stoi(a),b));
    }
    sort(all(vetor)); 
    rep(i,0,vetor.size())
      cout << vetor[i].y<<"\n";
  }
}
