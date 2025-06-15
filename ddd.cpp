#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int n;
int a[20][20];
vector<pair<int,int>>vec;
bool used[20];
int calc(){
	if(vec.size()==n){
		int ans=0;
		for(auto p:vec){
			ans^=a[p.first][p.second];
		}
		return ans;
	}
	int l=1;
	int ret=0;
	while(used[l])
		++l;
	used[l]=true;
	for(int i=l;i<=2*n;++i){
		if(!used[i]){
			vec.push_back({l,i});
			used[i]=true;
			ret=max(ret,calc());
			vec.pop_back();
			used[i]=false;
		}
	}
	used[l]=false;
	return ret;
}
int main(){
	cin>>n;
	for(int i=1;i<=2*n-1;++i){
		for(int j=i+1;j<=2*n;++j)
			cin>>a[i][j];
	}
	cout<<calc()<<endl;
}
