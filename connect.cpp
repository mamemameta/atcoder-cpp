#include<iostream>
#include<vector>
#define ll long long
using namespace std;
int main(){
	ll n;
	cin>>n;
	vector<string>v(n);
	for(auto &i:v)
		cin>>i;
	ll col,idx,cnt=0;
	vector<pair<int,int>>dir={
		{1,0},{1,1},{0,1},{-1,1}
	};
	ll white;
	for(idx=0;idx<n;++idx){
		for(col=0;col<n;++col){
			for(auto x:dir){
				cnt=white=0;
				for(ll amnt=0;amnt<6;++amnt){
					if(idx+x.first*amnt<0||\
							col+x.second*amnt<0||\
							idx+x.first*amnt>=n||\
							col+x.second*amnt>=n){
						break;
					}
					if(v[idx+x.first*amnt]\
							[col+x.second*amnt]=='#')
						++cnt;
					else
						++white;
					if(cnt>=4&&\
							!(((x==make_pair(-1,1))||(x==make_pair(1,1)))&&(white+cnt<6))){
						cout<<"Yes"<<endl;
						return 0;
					}
				}
			}
		}
	}
	cout<<"No"<<endl;
}
