//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,a,b;
    cin>>n>>a>>b;

    vector<int>v(n);
    int cnt=0;
    for(auto &u:v)cin>>u;

    bool weared=false;

    for(auto& u:v){
        if(u>=a && u<=b) continue;
        if(u<a){
            if(!weared){
                cnt++;
                weared=true;
            }
        }
        if(u>b && weared) weared=false;
    }
    cout<<cnt<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
