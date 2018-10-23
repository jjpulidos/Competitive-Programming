#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll t;
    scanf("%lld",&t);
    while(t--){
        ll g, l;
        scanf("%lld %lld",&g, &l);
        if(l%g!=0){
            printf("%d\n",-1);
        }else{
            printf("%lld %lld\n",g,l);
        }
    }
    return 0;
}