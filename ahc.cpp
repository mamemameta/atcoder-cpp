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
	vector have(K,vector<double>(3));
	vector target(H,vector<double>(3));
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
	for(ll i=0;i<H;++i)
	{
		ll b1=0,b2=0;
		double best_alpha=0.0;
		double best_err=1e18;
		auto &pt=target[i];
		for(ll k1=0;k1<K;++k1)
		{
			for(ll k2=0;k2<K;++k2)
			{
				double dc=target[i][0]-have[j][0];
				double dm=target[i][1]-have[j][1];
				double dy=target[i][2]-have[j][2];
				double dist=dc*dc+dm*dm+dy*dy;
				if(dist<best)
				{
					best=dist;bk=j;
				}
			}
		}
		cout<<"1 0 0 "<<bk<<'\n';//パレットに追加
		cout<<"2 0 0"<<'\n';//渡す
	}
	return 0;

}
