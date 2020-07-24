#include<bitc/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef Long Long ll;

int main(){
  int n; cin >> n;
  rep(i, n+1){
    int x = i * 108/100;
    if(x == n){
      cout << i << endl;
      return 0;
    }
  }
  cout << ":(" << endl;
  return 0;
}