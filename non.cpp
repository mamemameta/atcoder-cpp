#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cstring>
#include <functional>
#include <queue>
#include <set>
#include <cmath>
#include <map>
#define SIZE 105

using namespace std;
typedef long long int ll;
typedef pair <int,int> P;

char str[SIZE];
char ans[SIZE];

int main()
{
	int sz=0;
	while(scanf("%s",&str)!=EOF)
	{
		if(str[0]=='L') ans[sz++]='<';
		else if(str[0]=='R') ans[sz++]='>';
		else ans[sz++]='A';
	}
	for(int i=0;i<sz;i++)
	{
		if(i!=0) printf(" ");
		printf("%c",ans[i]);
	}puts("");
	return 0;
}

