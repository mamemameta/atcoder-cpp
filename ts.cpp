#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long

int main(){
	ll x,y,z;
	cin>>x>>y>>z;
	ll ans=-1;
	if(0<y&&y<x&&y<z){
		cout<<ans<<endl;
	}else if(x<y&&z<y&&y<0){
		cout<<ans<<endl;
	}else if(y<x&&x<0||x<0&&0<y){//x0yz
		cout<<-x<<endl;
	}else if(0<x&&x<y||y<0&&0<x){//y0x
		cout<<x<<endl;
	}else{
		if(0<x*z){//xyz0
			cout<<abs(x)<<endl;
		}else{//xy0z
			cout<<2*abs(z)+abs(x)<<endl;
		}
	}
}
/*
0xyz
0xzy
0

*/
