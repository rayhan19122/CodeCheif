//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(auto& u:v) cin>>u;
    int cnt=0;

    for(int i=0;i<n;i++){
        if(v[i]==1){
            cnt++;
            mp[v[i]]++;
        }
        else if(mp.find(v[i]-1)!=mp.end()){
            mp[v[i]]++;
            cnt++;
        } 
    }
    // for(auto u:v) cout<<u<<" ";
    // cout<<endl;
    cout<<cnt<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
