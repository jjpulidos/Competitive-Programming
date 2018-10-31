#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int T,N;
    ll x,y;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        ll xors = 0;
        while(N--){
            scanf("%lld %lld",&x,&y);
            ll grundy1;
            if(x>y){
                grundy1 = (x*x-y*y)/(x*y);
            }else{
                grundy1 = (y*y-x*x)/(y*x);
            }
            xors ^=grundy1;
        }
        if(xors){
            puts("YES\n");
        } else{
            puts("NO\n");
        }
    }
    return 0;
}