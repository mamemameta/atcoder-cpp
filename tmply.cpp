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
#define endl "\n"
#define ll long long
#define ch char
#define vec vector 
#define vll vector<ll> 
#define sll set<ll> 
#define pll pair<ll,ll> 
#define mkp make_pair
#define mll map<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define em empty()
#define fi first
#define se second
#define fr front()
#define ba back()
#define be begin()
#define rbe rbegin()
#define en end()
#define ren rend()
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fo(i,x,y) for(ll i=x;i<=y;++i)
#define fa(i,v) for(auto &i:v)
#define re return 
#define sz size()
#define so(v) sort(all(v))
#define pcount(x) __builtin_popcount(x)
#define rso(v) sort(rall(v))
#define rev(v) reverse(all(v))
#define i(x) for(ll i=0;i<x;++i)
#define j(x) for(ll j=0;j<x;++j)
#define k(x) for(ll k=0;k<x;++k)
#define xx(k) while(k--)
struct LazySegTree{
	private:
		ll n;
		vll node,lazy;
	public:
		LazySegTree(vll v)
		{
			ll siz=(ll)v.sz;
			n=1;
			while(n<siz)
				n*=2;
			node.resize(2*n-1);
			lazy.resize(2*n-1);
			i(siz)
			{
				node[i+n-1]=v[i];
				for(ll i=n-2;i>=0;--i)
				{
					node[i]=node[i*2+1]+node[i*2+2];
				}
			}
		}
		//k番目のノードに遅延評価を行う
		void eval(ll k,ll l,ll r)
		{
			//遅延配列が空でない場合,自ノード及び子ノードへ値の伝播が起る
			if(lazy[k]!=0)
			{
				node[k]+=lazy[k];
				//最下段かどうかチェック
				if(r-l>1)
				{
					lazy[2*k+1]+=lazy[k]/2;
					lazy[2*k+2]+=lazy[k]/2;
				}
				//伝播が終わったら自ノードの遅延配列を空にする
				lazy[k]=0;
			}
		}
		void add(ll a,ll b,ll x,ll k=0,ll l=0,ll r=-1)
		{
			//最初に呼び出されるのは[0,n)
			if(r<0)r=n;
			//k番目のノードに遅延評価を行う
			eval(k,l,r);
			//交わりなし
			if(b<=l||r<=a)return;
			//完全に被覆しているならば，遅延配列に値を入れた後に評価
			if(a<=l&&r<=b)
			{
				lazy[k]+=(r-l)*x;
				eval(k,l,r);
			}else//一部被覆->子について探索
			{
				add(a,b,x,2*k+1,l,(l+r)/2);
				add(a,b,x,2*k+2,l,(l+r)/2);
				node[k]=node[2*k+1]+node[2*k+2];
			}
		}
		ll ran(ll a,ll b,ll k=0,ll l=0,ll r=-1)
		{
			if(r<0)r=n;
			if(b<=l||r<=a)re 0ll;
			//関数が呼び出されたら評価
			eval(k,l,r);
			if(a<=l&&r<=b)return node[k];
			ll vl=ran(a,b,2*k+1,l,(l+r)/2);
			ll vr=ran(a,b,2*k+2,(l+r)/2,r);
			return vl+vr;
		}
};
int main()
{
	ge(ll,n,q);
	vll v(n);in(v);
	xx(q)
	{
		ge(ll,t,l,r);

	}
}
