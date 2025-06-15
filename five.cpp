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
	string s,t;
	cin>>s>>t;
	if(s.length()>t.length()){
		cout<<"No"<<endl;
		return 0;
	}
	cout<<((t.substr(0,s.length())==s)?"Yes":"No")<<endl;
}
