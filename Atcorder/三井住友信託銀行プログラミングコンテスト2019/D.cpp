#include<bitc/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef Long Long ll;

int main(){
  int n; 
  string s; 
  cin >> n >> s;
  int ans;
  rep(i, 1000){
    string t;
    int x = i;
    rep(j, 3){
      t += '0' + x%10;
      x /= 10;
    }
    int ti = 0;
    rep(j, n){
      if(s[j] == t[ti]){
        ++ti;
        if(ti == 3){ break; }       
      }
    }
    if(ti == 3){ ans ++; }
  }
  cout << ans << endl;
  return 0;
}