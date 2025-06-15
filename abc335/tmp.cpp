#include <iostream>
using namespace std;
int main() {
	cout<<"人数を入力してください"<<endl;
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		string s;
		cin>>s;
		cout<<s<<endl;
		//ここで自動的にsは解放される
	}
}

