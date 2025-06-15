#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
#include<cmath>
using namespace std;
#define ll long long
#define mkp make_pair
#define vll vector<ll> 
#define pll pair<ll,ll> 
#define puf push_front
#define pub push_back
#define pof pop_front()
#define pob pop_back()
#define fs first
#define se second
#define fr front()
#define bk back()

int main(){
	string st;cin>>st;
	ll s=0,e=0,n=0,w=0;
	for(auto c:st){
		switch (c){
			case 'S':
				s=1;
				break;
			case 'E':
				e=1;
				break;
			case 'N':
				n=1;
				break;
			case 'W':
				w=1;
				break;
		}
	}
	cout<<((s^n)||(e^w)?"No":"Yes")<<endl;
}
