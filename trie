struct Trie{
	struct Node{
		vector<ll> nxt;
		vector<string> done;
		ll dep,cnt=0;
		Node(ll c_):nxt(30),dep(c_){}
	};
	ll root=0;
	vector<Node>tree={Node(root)};
	void ins(string s){
		ll c=0; 
		for(ll i=0;i<s.sz;++i){
			ll to=tree[c].nxt[s[i]-'a'];
			if(to==0){
				to=tree.sz;
				tree[c].nxt[s[i]-'a']=to;
				tree.push_back(Node(i+1));
			}
			++tree[to].cnt;
			c=to;
		}
		tree[c].done.push_back(s);
	}
	ll cal(st s){
		ll ans=0,c=0;
		for(ll i=0;i<s.sz;++i){
			ll to=tree[c].nxt[s[i]-'a'];
			if(tree[to].cnt>1)++ans;
			else break;
			c=to;
		}
		return ans;
	}
};
