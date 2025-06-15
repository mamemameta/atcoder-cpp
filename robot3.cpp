#include<iostream>
using namespace std;
#define ll long long
constexpr int M=1e4;
int n,x,y,buf1[2*M+1],buf2[2*M+1],buf3[2*M+1];
int main(){
	cin>>n>>x>>y;
	int a;
	cin>>a;
	int *bufx=buf1,*bufy=buf2,*buf=buf3;
	bufx[M+a]=1,*(bufy+M)=1;
	for(ll i=1;i<n;++i){
		cin>>a;
		for(ll j=0;j<2*M+1;++j)
			buf[j]=0;
		if(i%2){
			for(ll j=0;j<2*M+1;++j){
				if(bufy[j]){
					if(j+a<=2*M+1){
						buf[j+a]=1;
					}
					if(j-a>=0){
						buf[j-a]=1;
					}
				}
			}
			swap(bufy,buf);
		}else{
			for(ll j=0;j<2*M+1;++j){
				if(bufx[j]){
					if(j+a<=2*M+1){
						buf[j+a]=1;
					}
					if(j-a>=0){
						buf[j-a]=1;
					}
				}
			}
			swap(bufx,buf);
		}
	}
	cout<<(bufx[M+x]&&bufy[M+y]?"Yes\n":"No\n")<<endl;
}
