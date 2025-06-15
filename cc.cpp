#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
#define ll long long
#define M 998244353

int main(){
	ll a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	a%=M;
	b%=M;
	c%=M;
	d%=M;
	e%=M;
	f%=M;
	ll ff=(((a*b)%M)*c)%M;
	ll gg=(((d*e)%M)*f)%M;
	ll ans=ff-gg;
	cout<<(ans<0?ans+M:ans)<<endl;
}
