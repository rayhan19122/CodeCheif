//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int>v(n),temp(n);
    for(int i=0;i<n;i++){cin>>v[i];temp[i]=v[i];}

    sort(temp.begin(),temp.end());
    
    for(int i=n-1;i>=0;i--){
        if(temp[i]!=v[i]){cout<<v[i]<<" ";cout<<endl;return;}
    }
    cout<<0<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
