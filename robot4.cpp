#include<iostream>
using namespace std;
#define ll long long
constexpr int M=1e4;
int n,x,y,buf1[2*M+1],buf2[2*M+1],buf3[2*M+1];
int main(){
	cin>>n>>x>>y;
	int a;
	cin>>a;
	int *bufx=buf1+M,*bufy=buf2+M,*buf=buf3+M;
	bufx[a]=1,*(bufy)=1;
	for(ll i=1;i<n;++i){
		cin>>a;
		for(ll j=-M;j<=M;++j)
			buf[j]=0;
		if(i%2){
			for(ll j=-M;j+a<=M;++j){
				buf[j]|=bufy[j+a],buf[j+a]|=bufy[j];
			}
			swap(bufy,buf);
		}else{
			for(ll j=-M;j+a<=M;++j){
				buf[j]|=bufx[j+a],buf[j+a]|=bufx[j];
			}
			swap(bufx,buf);
		}
	}
	cout<<(bufx[x]&&bufy[y]?"Yes\n":"No\n")<<endl;
}
