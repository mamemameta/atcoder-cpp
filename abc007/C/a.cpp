#include<iostream>
#include<vector>
#include<set>
#include<queue>
/*
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
*/
using namespace std;
int main()
{
	int ans=0;
	for(int x=1;x<=1e4;++x)
	{
		int sum=0;
		int b=1;
		for(;b*b<x;++b)
		{
			if(x%b==0)
			{
				sum+=b;
				sum+=x/b;
			}
		}
		if(x==b*b)
		{
			sum+=b;
		}
		if(sum%2==1)
		{
			ans++;
		}
	}
	cout<<ans<<endl;
}
