//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,x,k;
    cin>>n>>x>>k;

    if(n==x)cout<<x%k<<endl;
    else{
        if(x>k){
            int a=x%k;
            int b=((x/k)+1)*k;
            if(b<=n){
                cout<<min(b-x,a)<<endl;
            }else cout<<a<<endl;
        }
        else if(x<k){
            int p=k-x;
            if(p+x<=n){
                cout<<min(p,x%k)<<endl;
            }else cout<<x%k<<endl;
        }
        else cout<<0<<endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
