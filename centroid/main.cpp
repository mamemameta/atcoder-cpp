#include <iostream>
#include <vector>

using namespace std;

int N,K;
struct e{int to,len};
vector<e>g[N];
bool cd[N];
int sub_size[N];
int ans;
int cnt_sub(int v,int p)
{
	int c=1;
	for(int i=0;i<g[v].size();++i)
	{
		int w=g[v][i].to;
		if(w==p||cd[w])
			continue;
		c+=cnt_sub(g[v][i].to,v);
	}
	sub_size[v]=c;
	return c;
}
pair<int,int>search(int v,int p,int t)
{
	pair<int,int> res=make_pair()
}
int main() {

}
