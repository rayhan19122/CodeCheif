//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    if(n%2==0 && n%5==0) cout<<2<<endl;
    else if(n%2==0 || n%5==0) cout<<0<<endl;
    else cout<<1<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
