#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin>>n;
	set<string>st;
	string s;
	set<char>a={'H','D','C','S'};
	set<char>b={'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
	while(n--){
		cin>>s;
		if(st.find(s)!=st.end()){
			cout<<"No"<<endl;
			return 0;
		}
		st.insert(s);
		if(a.find(s[0])!=a.end()&&b.find(s[1])!=b.end()){
			continue;
		}else{
			cout<<"No"<<endl;
			return 0;
		}
	}
	cout<<"Yes"<<endl;
}
