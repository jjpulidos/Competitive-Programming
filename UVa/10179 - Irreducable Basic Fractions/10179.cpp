#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef vector<int> vi;

ll _sieve_size;
bitset<10000010> bs;
vi primes;
void sieve(ll upperbound) {
    _sieve_size = upperbound + 1;
    bs.set();
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
            for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
            primes.push_back((int)i);
        }
    }

ll EulerPhi(ll N) {
    ll PF_idx = 0, PF = primes[PF_idx], ans = N;
    while (PF * PF <= N) {
        if (N % PF == 0)
            ans -= ans / PF;
        while (N % PF == 0) N /= PF;
        PF = primes[++PF_idx];
    }

    if (N != 1)
        ans -= ans / N;
    return ans;
}

int main(){
    sieve(10000000);
    ll a;
    while(true){
        scanf("%lld",&a);
        if(a==0){
            break;
        }
        printf("%lld\n",EulerPhi(a));
    }
    return 0;
}