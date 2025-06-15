vector<pair<char,ll>>rle(string s){//run_length_encoding
	ll n=s.size();
	vector<pair<char,ll>>ans;
	for(ll i=0;i<n;++i){
		ll cnt=1;
		while(i+1<n&&s[i+1]==s[i]){
			++cnt;++i;
		}
		ans.push_back({s[i],cnt});
	}
	return ans;
}
