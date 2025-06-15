#include<iostream>
#include<functional>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include<bitset>
#include<iomanip>
#include<random>
#include<fstream>
#include<complex>
#include<time.h>
#include<stack>
#include<cassert>
using namespace std;
int f(int n)
{
	if(n==0)
	{
		return 1;
	}else
	{
		return n*f(n-1);
	}
}
int main()
{
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	cout<<f(a)+f(b)+f(c)+f(d)+f(e)<<endl;
}
