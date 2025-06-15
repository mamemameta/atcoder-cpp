#include <bits/stdc++.h>
using namespace std;

const int BOARD = 10000;

struct Company {
    int x, y, r;
    int a, b, c, d;
};

/*――――  共通ユーティリティ ――――*/
bool contains(const Company& cp){
    return (cp.a <= cp.x && cp.x+1 <= cp.c &&
            cp.b <= cp.y && cp.y+1 <= cp.d);
}
bool nonOverlap(const Company& A, const Company& B){
    if (A.c <= B.a || B.c <= A.a) return true;
    if (A.d <= B.b || B.d <= A.b) return true;
    return false;
}
bool allNonOverlap(const vector<Company>& v, int idx){
    for (int j=0;j<(int)v.size();++j){
        if (j==idx) continue;
        if (!nonOverlap(v[idx], v[j])) return false;
    }
    return true;
}
double eval(const vector<Company>& v){
    double sum=0;
    for (auto& cp: v){
        if (!contains(cp)) continue;
        long long s=(cp.c-cp.a)*(cp.d-cp.b);
        double p = 1.0 - pow(1.0 - min<double>(cp.r,s)/max<double>(cp.r,s), 2.0);
        sum += p;
    }
    return -sum;                    // 小さいほど良い
}

/*――――  修正版 hillClimb  ――――*/
void hillClimb(vector<Company>& v, const vector<int>& order){
    for (int idx: order){
        while (true){
            bool expanded = false;              // ← 変化があったか
            for (int dir=0; dir<4; ++dir){
                Company old = v[idx];

                switch(dir){
                    case 0:{                    // 左
                        int na = max(0, v[idx].a-1);
                        if (na<=v[idx].x) v[idx].a = na;
                        break;
                    }
                    case 1:{                    // 右
                        int nc = min(BOARD, v[idx].c+1);
                        if (nc>=v[idx].x+1) v[idx].c = nc;
                        break;
                    }
                    case 2:{                    // 下
                        int nb = max(0, v[idx].b-1);
                        if (nb<=v[idx].y) v[idx].b = nb;
                        break;
                    }
                    case 3:{                    // 上
                        int nd = min(BOARD, v[idx].d+1);
                        if (nd>=v[idx].y+1) v[idx].d = nd;
                        break;
                    }
                }

                /* 変化したか判定 */
                bool changed = (old.a!=v[idx].a || old.b!=v[idx].b ||
                                 old.c!=v[idx].c || old.d!=v[idx].d);

                if (!changed ||
                    !contains(v[idx]) ||
                    !allNonOverlap(v, idx)){
                    v[idx] = old;               // 元に戻す
                }else{
                    expanded = true;            // 本当に大きくできた
                }
            }
            if (!expanded) break;               // 4 辺全部だめ ⇒ 終了
        }
    }
}

/*――――  焼きなまし (変更なし) ――――*/
void SA(vector<Company>& v, double timelimit){
    const double T0=1000, T1=1e-4;
    auto st = chrono::steady_clock::now();
    double best = eval(v), cur = best;
    auto bestV = v;
    mt19937 rng((unsigned)chrono::steady_clock::now().time_since_epoch().count());
    int n=v.size();

    while (true){
        double t = chrono::duration<double>(chrono::steady_clock::now()-st).count();
        if (t>timelimit) break;
        double Temp = T0*pow(T1/T0, t/timelimit);

        int idx = uniform_int_distribution<int>(0,n-1)(rng);
        Company old = v[idx];

        int dir = uniform_int_distribution<int>(0,3)(rng);
        int dlt = (rng()&1)?1:-1;

        switch(dir){
            case 0:{ int na=max(0, min(old.x, old.a+dlt)); if(na<old.c) v[idx].a=na; break;}
            case 1:{ int nc=min(BOARD, max(old.x+1, old.c+dlt)); if(nc>old.a) v[idx].c=nc; break;}
            case 2:{ int nb=max(0, min(old.y, old.b+dlt)); if(nb<old.d) v[idx].b=nb; break;}
            case 3:{ int nd=min(BOARD, max(old.y+1, old.d+dlt)); if(nd>old.b) v[idx].d=nd; break;}
        }

        if (!contains(v[idx]) || !allNonOverlap(v,idx)){
            v[idx]=old; continue;
        }
        double nxt = eval(v);
        double prob = exp((cur-nxt)/Temp);
        if (nxt<cur || uniform_real_distribution<double>(0,1)(rng)<prob){
            cur=nxt;
            if (nxt<best){ best=nxt; bestV=v; }
        }else v[idx]=old;
    }
    v.swap(bestV);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;  cin>>n;
    vector<Company> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].x>>v[i].y>>v[i].r;
        v[i].a=v[i].x; v[i].b=v[i].y;
        v[i].c=v[i].x+1; v[i].d=v[i].y+1;
    }

    /* 面積大きい順＋安定ソート */
    vector<int> ord(n);
    iota(ord.begin(), ord.end(), 0);
    stable_sort(ord.begin(), ord.end(), [&](int i,int j){ return v[i].r>v[j].r; });

    hillClimb(v, ord);          // 修正版ヒルクライム
    SA(v, 4.7);                 // 5 秒 SA

    for(auto& cp: v)
        cout<<cp.a<<" "<<cp.b<<" "<<cp.c<<" "<<cp.d<<"\n";
}


