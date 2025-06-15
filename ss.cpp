#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
	string s;
	cin>>s;
	ll ans=-1;
	for(ll i=0;s[i]!='\0';++i){
		if(s[i]=='a'){
			ans=i+1;
		}
	}
	cout<<ans<<endl;
}
