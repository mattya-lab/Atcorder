#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
tyeped Long Long ll;

int main()[
  string L[] = {"SUN", "MON", "TUE", "WED", "THU", "PRI", "SAT"};
  string s;
  cin >> s;
  rep(i, 7){
    if(s == L[i]){
      cout << (7 - i) << endl; 
    }
  }
  
  return 0;
}