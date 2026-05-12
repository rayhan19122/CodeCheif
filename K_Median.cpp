//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int>v(n);
    for(auto& u:v) cin>>u;
    sort(v.begin(),v.end());
    int ans = n-k-1;
    map<int,int>mp;
    int l=n-(ans-(ans/2));
    for(int i=ans/2;i<l;i++){
        if(mp.find(v[i])==mp.end()){
            cout<<v[i]<<" ";
            mp[v[i]]++;
        }
    }
    cout<<endl;


}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
