//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;

    vector<int>v(n+1);
    for(auto &u:v) cin>>u;

    int ans = INT_MAX;
    for(int i=0;i<v.size()-1;i++){
        int x = max(v[i],v[i+1]);
        ans=min(ans,x);
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
