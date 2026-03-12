//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back({x,i+1});
    }
    sort(v.begin(),v.end());

    if((v[0].first==v[n-1].first) && v[0].first==0){
        cout<<-1<<endl;
        return;
    }
    
    cout<<v[n-1].second<<" "<<v[n-2].second<<" "<<v[n-3].second;
    cout<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
