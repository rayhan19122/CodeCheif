//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];

    map<int,int>mp;

    for(int i=1;i<=n;i++){
        mp[v[i]-i]++;
    }
    int ans=0;
    for(auto& u:mp){
        int p = (u.second*(u.second-1))/2;
        ans+=p;
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
