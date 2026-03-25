//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    vector<int>p(n);
    for(auto& u:v) cin>>u;
    for(auto& u:p) cin>>u;
    vector<int>ans;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int x = max(v[i],v[j]);
            int y = x-(0.5*x);
            int z = max(y,x-100);
            int s = z+min(v[i],v[j]);
            if(s<=k) ans.push_back(p[i]+p[j]);
        }
    }
    sort(ans.rbegin(),ans.rend());
    if(!ans.empty()) cout<<ans[0]<<endl;
    else cout<<0<<endl;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
