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
    int of=0;
    int cm=1;
    int ans=0;
    while (cm<=s.size())
    {
        if(s[cm]==s[cm-1]){
            cm++;
            continue;
        }
        ans+=(cm-of)/3;
        of=cm;
        cm++;
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
