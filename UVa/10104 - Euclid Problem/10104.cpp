#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll EuclidesExtendido(ll a, ll b, ll &x, ll &y) {
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    ll x1,y1;
    ll temp=EuclidesExtendido(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return temp;
}

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        ll x,y,d;
        d = EuclidesExtendido(a,b,x,y);
        printf("%lld %lld %lld\n",x,y,d);
    }
    return 0;
}