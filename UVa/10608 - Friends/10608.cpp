#include <bits/stdc++.h>

using namespace std;
typedef  long long ll;

int main() {

    ll t;
    scanf("%lld", &t);
    while(t--){
        ll n,m;

        scanf("%lld %lld", &n, &m);
        ll disjSet[n];
        for (ll i = 0; i<n; i++){
            disjSet[i]=i;
        }
        for(ll j = 0;j<m;j++){
            ll a,b;
            scanf("%lld %lld", &a, &b);
            ll temp = disjSet[a-1];
            ll aux = disjSet[b-1];
            disjSet[b-1]=temp;
            for(ll i = 0; i < n;i++)
            {
                if(disjSet[ i ] == aux)
                    disjSet[ i ] = disjSet[ b-1 ];
            }
        }
        sort(disjSet,disjSet+n);
        
        int maxd=0;
        int temp =0;
        for(ll k=0;k<n;k++){
            if(disjSet[k]==disjSet[k+1]){
                temp++;
            }else{
                temp=0;
            }
            if(temp>maxd) maxd=temp;
        }

        cout<<maxd+1<<endl;

    }
    return 0;
}