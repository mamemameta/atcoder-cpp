#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int a[20][20];
int n;
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
	int l;
	for(l=1;l<=2*n;++l){
		if(!used[l]){
			used[l]=l;
			break;
		}
	}
	int ret=0;
	for(int i=1;i<=2*n;++i){
		if(!used[i]){
			used[i]=true;
			vec.push_back({l,i});
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
	for(int i=1;i<2*n;++i){
		for(int j=i+1;j<=2*n;++j){
			cin>>a[i][j];
		}
	}
	cout<<calc()<<endl;
}
