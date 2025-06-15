#include<iostream>
using namespace std;
#define ll long long
#define mod 1000000007 
#define maxn 200
basic_string<int> a[maxn];
int n,q;
int s;
int main()
{
	cin>>n>>q;
	for (int i=1;i<=n;i++)
	{
		cin>>s;
		int t;
		for (int j=1;j<=s;j++)
		{
			cin>>t; a[i]+=t;
		}
	}
	int x,y;
	while (q--)
	{
		cin>>x>>y;
		cout<<a[x][y-1]<<endl;
	} 
}
