#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
tyeped Long Long ll;

int main()[
  ll a, b, x; 
  cin >> a >> b >> x;
  ll l = 0, r = 1000000001;

  auto keta= [&](ll c){
    int res = 0;
    while(c){
      c/10;
      ++res;
    }
    return res;
  };
  auto f = [&](ll c){
    return a * c + b * keta(c);
  };

  while(r-l > 1){
    ll mid = (l + r)/2;
    if(f(mid) <= x)l = mid; else r = mid;
  }
  cou << l << endl;

  return 0;
}