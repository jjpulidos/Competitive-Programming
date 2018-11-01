#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll INF = 1e18;
bool compare(const pair<ll, ll>&i, const pair<ll, ll>&j){
    return i.first-i.second > j.first-j.second;
}
int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll n,m,a,b;
    cin>>n>>m;
    vector<pair<ll,ll>> songs;
    while(n--){
        cin>>a>>b;
        songs.push_back(make_pair(a,b));
    }
    sort(songs.begin(),songs.end(),compare);
//    for(auto tmp: songs){
//        cout<<tmp.first<<" "<<tmp.second<<'\n';
//    }
    ll sumita = 0;
    ll idx = 0;
    for(pair<ll,ll> s:songs){
        sumita += s.first;
    }
    ll count = 0;
    while(sumita>m&& idx<songs.size()){
        sumita+=songs[idx].second;
        sumita-=songs[idx].first;
        count++;
        idx++;
    }
    if(sumita<=m){
        cout<<count;
    }else{
        cout<<-1LL;
    }
    return 0;
}