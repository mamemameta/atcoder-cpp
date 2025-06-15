#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#define ll long long
using namespace std;
bool check (int x,const vector<int>&a,int n,int m,int k) {
	vector<int> b(n);
	for (int i = 0; i < n; ++i) {
		int j = 30;
		while (j >= 0 && ((a[i] >> j | ~x >> j) & 1)) {
			--j;
		}
		if (j >= 0) {
			b[i] = (x & ((1 << (j + 1)) - 1)) - (a[i] & ((1 << j) - 1));
		}
	}
	for_each(b.begin(),b.end(),[](int l){
			cout<<l<<' ';
			});
	cout<<endl;
	nth_element(b.begin(), b.begin() + k, b.end());
	for_each(b.begin(),b.end(),[](int l){
			cout<<l<<' ';
			});
	cout<<endl;
	ll ans = accumulate(b.begin(), b.begin() + k, 0LL);
	return ans <= m;
}
int main() {
	int n, m, k;
	cin >> n >> m >> k;
	static vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	for (int d = 30; d >= 0; d--) {
		if (check(ans | 1 << d,a,n,m,k)) {
			ans |= 1 << d;
		}
	}
	cout << ans << "\n";
	return 0;
}

