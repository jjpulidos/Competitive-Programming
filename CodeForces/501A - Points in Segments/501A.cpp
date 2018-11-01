#include <bits/stdc++.h>

using namespace std;

typedef int ll;

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll n,m,l,r;
    cin>>n>>m;
    vector<pair<ll,ll>> res;
    vector<ll> casi;
    while(n--){
        cin>>l>>r;
        res.push_back(make_pair(l,r));
    }
    for (ll i = 1; i<=m; i++){
        bool flag=true;
        for (auto tmp:res) {
           if(tmp.first<=i&& tmp.second>=i){
               flag = false;
               break;
           }
        }
        if(flag){
            casi.push_back(i);
        }
    }

    cout<<casi.size()<<'\n';
    for (auto tmp:casi) {
        cout<<tmp<<" ";
    }
    return 0;
}