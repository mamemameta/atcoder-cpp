/**
 *    author:  tourist
 *    created: 19.03.2022 15:00:02       
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long l, r;
  cin >> l >> r;
  for (long long s = 0; s <= r - l - 1; s++) {
    for (long long x = 0; x <= s; x++) {
      long long y = s - x;
      long long a = l + x;
      long long b = r - y;
	 cout<<"s"<<s<<"x"<<x<<"y"<<y<<"a"<<a<<"B"<<b<<endl;
    }
  }
  return 0;
}

