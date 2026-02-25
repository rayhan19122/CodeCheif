//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,s;
    cin>>n>>s;

    int x=s/n;
    int p=0;
    int q=0;
    int ans=0;
    if(s%n){
        x+=1;
        p=(n-1)*x;
        q=s-p;
        if(x==6) ans+=(5*(n-1));
        else ans+=(6*(n-1));
        if(q==6) ans+=5;
        else ans+=6;
    }
    else{
        if(x==6) ans+=(n*5);
        else ans+=(n*6);
    }
    cout<<ans<<endl;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
