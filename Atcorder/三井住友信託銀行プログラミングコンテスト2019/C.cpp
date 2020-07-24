#include<bitc/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef Long Long ll;

int main(){
  int n; cin >> n;
  rep(i, n+1){
    int rest = n - i*100;
    if(0 <= rest && rest <= 5*i){
      puts("1");
      return 0;
    }
    if(rest < 0){ break; }
  }
  puts("0");
  return 0;
}