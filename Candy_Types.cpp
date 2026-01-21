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
    for(auto &u:v){
        cin>>u;
        mp[u]++;
    }
    int mxFreq = 0;
    for(auto u:mp){
        if(u.second>mxFreq) mxFreq=u.second;
    }
    set<int>st;
    for(auto u:mp){
        if(u.second==mxFreq) st.insert(u.first);
    }

    cout<<(*(st.begin()))<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
