//In the name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool oddCheck(int x){
    return x&1;
}
void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    int sum=0;
    for(auto &u:v){
        cin>>u;
        sum+=u;
    }
    bool flag=false;
    for(auto &u:v){
        if(!oddCheck(sum-u)){
            cout<<"Yes"<<endl;
            flag=true;
            break;
        }
    }
    if(!flag) cout<<"No"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
