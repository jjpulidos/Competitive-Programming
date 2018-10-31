#include <bits/stdc++.h>
typedef long long ll;
#define MOD 1000000007
using namespace std;

ll power(ll x, ll y, ll p){
    ll res = 1;

    x = x % p;

    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;

        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

int main()
{
    ll p , k;
    scanf("%lld %lld", &p, &k);
    if (k == 0){
        printf("%lld",power(p,p-1,MOD));
    }else if(k ==1){
        printf("%lld",power(p,p,MOD));
    }else{
        ll o = 1;
        ll temp = k;
        while(temp !=1){
            temp = temp*k%p;
            o++;
        }
        printf("%lld",power(p,((p-1)/o),MOD));
    }

    return 0;
}
