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
#define mkp make_pair
#define pll pair<ll,ll> 

int main(){
	double a,b,d;
	cin>>a>>b>>d;
	double pi=acos(-1);
	double hyp=hypot(a,b);
	double theta=atan2(b,a);
	double rot=d/180*pi;
	printf("%.15f ", hyp*cos(theta+rot));
	printf("%.15f\n",hyp*sin(theta+rot));
}
