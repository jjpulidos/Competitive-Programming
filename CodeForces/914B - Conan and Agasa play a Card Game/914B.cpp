#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll MAX =100005;

int main() {

    ll n;

    scanf("%lld", &n);
    ll a[MAX]={};
    for(int j = 0; j<n;j++){
        ll temp;
        scanf("%lld", &temp);
        a[temp]++;
    }
    sort(a,a+n);

    for(int i =0; i<MAX;i++){
        if(a[i]%2){
            puts("Conan");
            return 0;
        }
    }
    puts("Agasa");

    return 0;