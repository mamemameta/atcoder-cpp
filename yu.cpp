#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <tuple>
#include <map>
#include<set>
#include <unordered_set>

using namespace std;
using ulli = unsigned long long int;
using lli = long long int;

vector<int> x(200010, 3);//数列X
vector<int> todo(0);//DFSに使うやつ
vector<vector<int>> ren(0, vector<int>(0));//数列Xの要素同士の繋がり

void dfs(int now) {//   DFSの処理
    for (int to : ren[now]) {
            if (x[to] == x[now]) {
		cout<<"No"<<endl;
		exit(0);	
	    } //良い数列ではないため報告
	    if(x[to]==3) {
		    x[to] = 3 - x[now];//x[a] == 1ならx[i] = 2,x[a] == 2ならx[i] = 1 
		    dfs(to);//要探索範囲の追加
	    }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    ren.resize(n + 1);
    x.resize(n + 1);
    vector<int> a(m);//(入力で与えられるやつ)
    vector<int>b(m);
    for (int j = 0; j < m; j++) {
        cin >> a[j];
    }
    for (int j = 0; j < m; j++)cin >> b[j];

    for (int j = 0; j < m; j++) {//Xの要素の繋がりの登録
       ren[a[j]].push_back(b[j]);
       ren[b[j]].push_back(a[j]);//双方向に登録
    }

    for (int j = 1; j <= n; j++) {
        if (x[j] == 3) {
            x[j] = 1;//X_jを1と仮定(繋がっている一塊は一気に処理されるので仮定しても問題なし)
	    dfs(j);
        }
    }
    cout << "Yes"<<endl;
    return 0;
}
