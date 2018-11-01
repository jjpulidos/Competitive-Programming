#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll INF = 1e18;

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll n,k,s;
    cin>>n>>k>>s;
    vector<ll> moves;
    ll n2 = s/k;
    ll n1;
    if(s%k!=0){
        n1 = n2+1;
    }else{
        n1 = n2;
    }
    if(n1>n-1 || k>s){
        cout<<"NO"<<'\n';
        return 0;
    }
    ll l = s -(n2*k);
    for (ll i = 0; i<l;i++){
        moves.push_back(n1);
    }
    for (ll i = l; i<k;i++){
        moves.push_back(n2);
    }
    bool flag = true;
    ll y= 1;
    string ans = "";
    for (ll i = 0; i<k;i++){
        if(flag){
            y+=moves[i];
            ans+= to_string(y)+" ";
        }else {
            y -= moves[i];
            ans += to_string(y) + " ";
        }
        flag = !flag;
    }
    cout<<"YES"<<'\n';
    cout<<ans<<'\n';
    return 0;
}