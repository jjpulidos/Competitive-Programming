#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

//  254B
ll casos[100];

ll busqueda (ll buscado){
    if(casos[buscado]!=buscado){
        casos[buscado]= busqueda(casos[buscado]);
    }
    return casos[buscado];
}

int main() {
    ll n,m,a,b, res;
    scanf("%I64d %I64d", &n,&m);
    for(ll i = 0; i<n; i++) casos[i]=i;
    while (m--){
        scanf("%I64d %I64d",&a,&b);
        casos[busqueda(b)]= busqueda(a);
    }
    res= 1LL<< n;
    for(ll i  = 0; i<n; i++){
        if(busqueda(i)==i) res=res>>1LL;
    }
    cout<<res<<'\n';


   return 0;
}