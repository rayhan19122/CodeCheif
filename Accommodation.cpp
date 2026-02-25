//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int b,g,x,y,n;
    cin>>b>>g>>x>>y>>n;

    if(x+y>n) {cout<<-1<<endl;return;}
    int a;
    int p=b+g;
    if(p%n==0) a=p/n;
    else a=(p/n)+1;
    //cout<<a<<endl;
    int d=a*x;
    int c=a*y;
    if(b>=d && g>=c) cout<<a<<endl;
    else cout<<-1<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
