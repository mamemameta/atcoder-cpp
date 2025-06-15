#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;
#define ll long long
#define bl bool
#define mkp make_pair
#define vll vector<ll> 
#define pll pair<ll,ll> 
#define mll map<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()
#define al(x) x.begin(),x.end()
#define ral(x) x.rbegin(),x.rend()
#define ff(i,x,y) for(ll i=x;i<y;++i)
#define co cout<<
#define el <<endl;
#define ci cin>>
#define fa(i,v) for(auto &i:v)
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  long long k;
  cin >> k;
  int n = (int) s.size();
  if (s == string(n, s[0])) {
    cout << n * k / 2 << '\n';
  } else {
    int ans1 = 0;
    for (int i = 0; i + 1 < n; i++) {
      if (s[i % n] == s[(i + 1) % n]) {
        ++ans1;
        ++i;
      }
    }
    int ans2 = 0;
    for (int i = 0; i + 1 < 2 * n; i++) {
      if (s[i % n] == s[(i + 1) % n]) {
        ++ans2;
        ++i;
      }
    }
    cout << ans1 + (ans2 - ans1) * (k - 1) << '\n';
  }
  return 0;
}

