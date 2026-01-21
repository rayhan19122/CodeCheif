//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &u:v) cin>>u;
    for(int i=n-1;i>1;i--){
        if(v[i]<v[i-1]){
            cout<<v[i]<<endl;
            return;
        }
        else if((v[i]-v[i-1]>1)){
            cout<<v[i-1]<<endl;
            return;
        }
        if(v[i]!=n) {
            cout<<v[i]<<endl;
            return;
        }
    }
    cout<<0<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
