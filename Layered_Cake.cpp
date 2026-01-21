//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>v1(n);
    vector<int>v2(m);

    for(auto &u:v1) cin>>u;
    for(auto &u:v2) cin>>u;

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    int ans=0;
    for(auto u:v1){
        int x = lower_bound(v2.begin(),v2.end(),u)-v2.begin();
        ans+=x;
    }
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
