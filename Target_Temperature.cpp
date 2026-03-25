//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    int mx = 0;
    vector<int>v(n);
    map<int,int>mp;
    for(auto& u:v){
        cin>>u;
        mx=max(mx,u);
        mp[u]++;
    }
    int cnt=0;
    for(auto& u:mp){
        if(u.second>=2){
            if(cnt>=2) break;
            cnt++;
        }
    }
    if(cnt>1) cout<<"No"<<endl;
    else if(cnt==1 && mp[mx]<=1) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
