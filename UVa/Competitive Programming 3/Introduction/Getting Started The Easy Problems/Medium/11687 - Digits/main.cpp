/**
 * 11687 - Digits
 * Created by Juan Pulido on 6/07/2018
 */


typedef long long ll;
typedef long double ld;

#define mp make_pair
#define pb push_back
#define f first
#define s second


#include <bits/stdc++.h>

const ll MOD = 1000000007;
const ll INF = 1e18;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string str;
    while(cin>>str,str!="END"){
        ll numMax = INF;
        ll i = 0;
        if(str=="1"){
            cout<<"1"<<'\n';
        }else{
            while(str.length()<numMax){
                numMax=str.length();
                str = to_string(numMax);
                i++;
            }
            i++;
            cout<<i<<'\n';
        }
    }

    return 0;
}   