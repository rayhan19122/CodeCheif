//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>v(n+1);
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        mp[v[i]]=i;
    }
    if(mp.size()<3){
        cout<<-1<<endl;
        return;
    }
    sort(v.begin(),v.end());
    int cnt=0;
    for(auto it = mp.rbegin(); it != mp.rend(); it++){
        if(cnt==3) break;
        cout<<it->second<<" ";
        cnt++;
    }
    cout<<endl;
    
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
