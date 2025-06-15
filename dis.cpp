#include<iostream>
#include<iterator>
#include<list>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
	set<ll>st={1,3,6,8,9};
	auto s=st.begin(),e=st.end();
	cout<<distance(s,e)<<endl;
	cout<<distance(e,s)<<endl;

}
