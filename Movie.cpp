//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,m,a,b,c;
    cin>>n>>m>>a>>b>>c;

    int mn=min(n,m);
    int x=(n+m)-mn;
    int r=x-mn;
    int ans=0;
    ans+=(mn*c);
    if(n>m) ans+=(r*a);
    else ans+=(r*b);
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
