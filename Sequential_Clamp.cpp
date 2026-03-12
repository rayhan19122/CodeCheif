//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>>pr;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        pr.push_back({x,y});
    }
    int ans = INT_MAX;
    for(auto& u:pr){
        if(ans<u.first) ans=u.first;
        if(ans>u.second) ans =u.second;
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
