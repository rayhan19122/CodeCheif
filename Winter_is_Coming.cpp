//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,a,b;
    cin>>n>>a>>b;

    vector<int>v(n);
    int cnt=0;
    for(auto &u:v){
        cin>>u;
        if(u<a)cnt++;
    }
    cout<<cnt<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
