#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<algorithm>
#include<numeric>
using namespace std;
#define ll long long

int main(){
	ll n;cin>>n;
	ll H,W,t;
	ll hs=1,hm,he=n,ws=1,wm,we=n;
	while(hs<=he){
		hm=(hs+he)/2;
		if(hs==he){
			H=hm;
			break;
		}
		cout<<"? "<<hs<<" "<<hm<<" 1 "<<n<<endl<<flush;
		cin>>t;
		if(t==0){
			H=hm;
			break;
		}
		if(t<(hm-hs+1)){
			he=hm;
		}else{
			hs=hm+1;
		}
	}
	while(ws<=we){
		wm=(ws+we)/2;
		if(ws==we){
			W=wm;
			break;
		}
		cout<<"? "<<"1 "<<n<<" "<<ws<<" "<<wm<<endl<<flush;
		cin>>t;
		if(t==0){
			W=wm;
			break;
		}
		if(t<(wm-ws+1)){
			we=wm;
		}else{
			ws=wm+1;
		}
	}
	cout<<"! "<<H<<" "<<W<<endl<<flush;
}
