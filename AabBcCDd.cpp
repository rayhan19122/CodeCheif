//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;

    int ans=0;

    for(auto& u:s){
        mp[tolower(u)]++;
    }

    vector<int>value;

    for(auto& u:mp){
        value.push_back(u.second);
    }
    sort(value.rbegin(),value.rend());

    if(value.size()>=2) cout<<value[0]+value[1]<<endl;
    else cout<<n<<endl;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
