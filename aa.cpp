#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<map>
using namespace std;
int main(){
	map<char,int>mp={
		{'a',0},
		{'t',1},
		{'c',2},
		{'o',3},
		{'d',4},
		{'e',5},
		{'r',6}
	};
	string s;
	cin>>s;
	int ans=0;
	while(s!="atcoder"){
		int i=0;
		while(s[i+1]!='\0'){
			if(mp[s[i]]>mp[s[i+1]]){
				swap(s[i],s[i+1]);
				++ans;
			}
			++i;
		}
	}
	cout<<ans<<endl;
}
