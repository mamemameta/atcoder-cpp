#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long
#define N	2000
#define INF	0x3f3f3f3f3f3f3f3fLL
int main(){
	static long long dp[N + 1];
	int n, m, i;

	scanf("%d%d", &n, &m);
	for (i = 0; i <= m; i++)
		dp[i] = -INF;
	dp[0] = 0;
	while (n--) {
		int a;

		scanf("%d", &a);
		for (i = m; i > 0; i--)
			if (dp[i - 1] != -INF)
				dp[i] = max(dp[i], dp[i - 1] + a * i);
		for(ll i=0;i<8;++i){
			cout<<dp[i]<<" ";
		}
		cout<<endl;
	}
	printf("%lld\n", dp[m]);
	return 0;
}
