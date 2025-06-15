#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
#define ll unsigned long long
#define M 99824493

map<ll,ll>mp;
ll memo[M];
int f(ll x){
	if(x==0){
		mp[x]++;
		return 1;
	}
	if(x<M){
		if(memo[x]!=0){
			mp[x]++;
			return memo[x];
		}else{
			return memo[x]=f(x/2)+f(x/3);
		}
	}else{
		return f(x/2)+f(x/3);
	}
}

int main(){
	memo[0]++;
	ll n;
	cin>>n;
	f(n);
	string ans="000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
	auto it=mp.begin();
	ll x;
	string s;
	it=mp.begin();
	while(it!=mp.end()){
		x=(memo[it->first])*(it->second);
		s=to_string(x);
		reverse(s.begin(),s.end());
		for(ll i=0;s[i]!='\0';++i){
			if(ans[i]=='\0'){
				ans+='0';
				ans+='0';
			}
			if(ans[i]>'9'){
				ans[i+1]+=(ans[i]-'0')/10;
				ans[i]=(ans[i]-'0')%10+'0';
			}
			ll c=s[i]+ans[i]-2*'0';
			if(c>9){
				++ans[i+1];
				ans[i]=c-10+'0';
			}else{
				ans[i]='0'+c;
			}
		}
		for(ll i=0;ans[i]!='\0';++i){
			if(ans[i]>'9'){
				ans[i+1]+=(ans[i]-'0')/10;
				ans[i]=(ans[i]-'0')%10+'0';
			}
		}
		it++;
	}
	reverse(ans.begin(),ans.end());
	auto itt=ans.begin();
	while(*itt=='0'){
		++itt;
	}
	cout<<string(itt,ans.end())<<endl;
}


