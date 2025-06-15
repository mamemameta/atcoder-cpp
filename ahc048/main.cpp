#include<iostream>
#include<functional>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<cstring>
#include<bitset>
#include<iomanip>
#include<random>
#include<fstream>
#include<complex>
#include<time.h>
#include<stack>
#include<cassert>
using namespace std;
#define ll long long

int main()
{
	ll N,K,H,T,D;//N=20;H=1000;4000<=T<=6400
	cin>>N>>K>>H>>T>>D;
	/*N*N　のパレット, K種類の絵の具
	 * H回渡す , T回の処理, 絵の具を出すとコストD
	 */
	vector own(K,vector<double>(3));
	for(ll i=0;i<K;++i)
		for(ll j=0;j<own[0].size();++j)
			cin>>own[i][j];
	vector target(H,vector<double>(3));
	for(ll i=0;i<H;++i)
		for(ll j=0;j<target[0].size();++j)
			cin>>target[i][j];
	vector vx(N,vector<ll>(N-1,1));
	vx[0][0]=0;//左上だけ開ける
	vector vy(N-1,vector<ll>(N,1));
	/*
	 * 1 y x k       チューブkから(y,x)に1g
	 * 2 y x         (y,x)から1g渡す
	 * 3 y x         (y,x)から1g廃棄
	 * 4 y1 x1 y2 x2 (y1,x1) (y2,x2)の間の仕切りをxor
	 */
	//仕切りを出力
	for(ll i=0;i<vx.size();++i)
		for(ll j=0;j<vx[0].size();++j)
			cout<<vx[i][j]<<(j==vx[0].size()-1?'\n':' ');
	for(ll i=0;i<vy.size();++i)
		for(ll j=0;j<vy[0].size();++j)
			cout<<vy[i][j]<<(j==vy[0].size()-1?'\n':' ');

	//各ターゲットについて処理
	for(int i=0;i<H;i++){
		int best_k1 = 0, best_k2 = 1;
		double best_alpha = 0.0;
		double best_err = 1e18;
		auto &pt = target[i];
		for(int k1=0;k1<K;k1++){
			for(int k2=k1+1;k2<K;k2++){
				// 1) p1-p2 ベクトル差
				double dx = own[k1][0] - own[k2][0];
				double dy = own[k1][1] - own[k2][1];
				double dz = own[k1][2] - own[k2][2];
				double denom = dx*dx + dy*dy + dz*dz;
				if(denom < 1e-12) continue;
				// 2) α* の計算 (射影公式)
				double vx = pt[0] - own[k2][0];
				double vy = pt[1] - own[k2][1];
				double vz = pt[2] - own[k2][2];
				double alpha = (dx*vx + dy*vy + dz*vz) / denom;
				alpha = min(1.0, max(0.0, alpha));
				// 3) 混色結果と誤差
				double mx = alpha*own[k1][0] + (1-alpha)*own[k2][0];
				double my = alpha*own[k1][1] + (1-alpha)*own[k2][1];
				double mz = alpha*own[k1][2] + (1-alpha)*own[k2][2];
				double err = (mx-pt[0])*(mx-pt[0])
					+ (my-pt[1])*(my-pt[1])
					+ (mz-pt[2])*(mz-pt[2]);
				if(err < best_err){
					best_err = err;
					best_k1 = k1;
					best_k2 = k2;
					best_alpha = alpha;
				}
			}
		}
		// best_k1, best_k2, best_alpha が決定
		int m = 2;
		int g1 = int(round(best_alpha * m));
		int g2 = m - g1;
		// チューブ best_k1 を g1 回注入 (各1g)
		for(int t=0;t<g1;t++) cout << "1 0 0 " << best_k1 << "\n";
		// チューブ best_k2 を g2 回注入
		for(int t=0;t<g2;t++) cout << "1 0 1 " << best_k2 << "\n";
		// 1g を取り出して画伯に渡す
		cout << "2 0 0\n";
		// 残り1g を廃棄
		cout << "3 0 0\n";
	}


	return 0;

}
