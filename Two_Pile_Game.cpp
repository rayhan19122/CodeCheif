//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int a,b;
    cin>>a>>b;

    if(a==0 && b!=0) {cout<<"Bob"<<endl;return;}
    if(a!=0){
        if(a&1) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
