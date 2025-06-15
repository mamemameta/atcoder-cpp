#include<iostream>
#include<functional>
#include<vector>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;

	//隣接リスト
	vector<vector<int>>Adjacency_list(n+5);

	//リストに追加
	for(int i=0;i<m;++i){
		int a,b;
		cin>>a>>b;
		Adjacency_list[a].push_back(b);
		Adjacency_list[b].push_back(a);
	}

	//頂点の色
	vector<int> color(n+5);

	//深さ優先探索
	function<void(int,int)>dfs=[&](int v,int c){
		if(color[v]==c)
			return;
		if(color[v]==-c){
			cout<<"No"<<endl;
		    	exit(0);
		}
		color[v]=c;
		for(auto to:Adjacency_list[v]){
			dfs(to,-c);
		}
	};

	//すべての頂点の色を確認
	for(int i=1;i<=n;++i){
		if(color[i]==0){
			dfs(i,1);
		}
	}
	cout<<"Yes"<<endl;
}
