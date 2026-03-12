//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if(c%3!=0){
        cout<<"No"<<endl;
        return;
    }
    int b_sb = (c/3)+(a*2);
    if(b!=b_sb) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
