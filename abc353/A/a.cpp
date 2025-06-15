#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int h1;
	cin>>h1;
	for(int i=2;i<=n;++i)
	{
		int h;
		cin>>h;
		if(h1<h)
		{
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
}
