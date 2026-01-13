//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    bool paisi=false;

    map<char,int>mp;
    for(auto u:s){
        mp[u]++;
    }
    for(auto u:mp){
        if(u.second>=2){paisi=true;break;}
    }
    if(paisi) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
