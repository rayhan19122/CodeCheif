//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;

    vector<int>v(n+1);
    for(int i=0;i<n;i++) cin>>v[i];
    v[n]=0;
    // for(auto u:v) cout<<u<<" ";
    // cout<<endl;
   
    int ans=0;
    int cnt=0;
    for(int i=0;i<=n;i++){
        if(v[i]==0){
            ans=max(ans,cnt);
            cnt=0;
        }else cnt++;
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
