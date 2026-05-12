//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    int mx=INT_MIN;
    for(auto& u:v){
        cin>>u;
        mx=max(mx,u);
    }

    int ans=0;
    int l=1;
    int r=mx;
    while (l<=r)
    {
        int p=0;
        int mid = (l+r)/2;
        for(auto& u:v){
            p+=u/mid;
        }
        if(p>=m){
            ans=mid;
            l=mid+1;
        }else r=mid-1;
    }
    cout<<ans<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin >> t;
    // while (t--) 
    solve();
    return 0;
}
