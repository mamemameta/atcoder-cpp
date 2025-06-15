#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long

int main(){
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<max(0LL,(min(b,d)-max(a,c)))<<endl;
}
