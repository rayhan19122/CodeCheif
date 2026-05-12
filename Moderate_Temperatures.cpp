//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    int mx=INT_MIN;
    int mn=INT_MAX;
    map<int,int>mp;
    for(auto& u:v){
        cin>>u;
        mx=max(mx,u);
        mn=min(mn,u);
        mp[u]++;
    }
    if(mp.size()<3){
        cout<<0<<endl;
        return;
    }
    cout<<n-mp[mx]-mp[mn]<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
