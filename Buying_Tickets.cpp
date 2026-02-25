//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int>v(n);
    string s;
    for(auto& u:v) cin>>u;
    cin>>s;

    vector<pair<int,char>>pr;
    for(int i=0;i<n;i++){
        pr.push_back({v[i],s[i]});
    }

    sort(pr.begin(),pr.end());

    int ans=0;
    int cnt=0;
    for(auto u:pr){
        if(u.second=='0') {
            if(cnt>=k) break;
            ans+=u.first;
            cnt++;
        }
    }
    if(cnt<k) cout<<-1<<endl;
    else cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
