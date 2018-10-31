#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll a ,b, m;
    cin>>a>>b>>m;
    ll ceros = 1000000000;
    for (int i = 0; i<=min(a,m-1); i++){
        ll s1 = (i*ceros)%m;
        ll res = (m-s1)%m;
        if(res>b){
            printf("1 %09d", i);
            return 0;
        }
    }
    printf("2");

    return 0;
}