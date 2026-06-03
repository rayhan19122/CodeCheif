//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
bool isMersenne(long long n) {
    return n > 0 && (n & (n + 1)) == 0;
}
void solve() {
    int n;
    cin>>n;
    int sum=0;
    vector<int>v(n);
    for(auto &u:v){
        cin>>u;
        sum+=u;
    }
   if(isMersenne(sum)) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;

}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
