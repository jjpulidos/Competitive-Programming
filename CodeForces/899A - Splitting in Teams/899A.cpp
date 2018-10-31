#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    stack<ll> pila2;
    stack<ll> pila1;
    ll n;
    ll t=0;
    scanf("%lld",&n);
    while(n--){
        ll temp;
        scanf("%lld", &temp);
        if (temp==1){
            pila1.push(temp);
        }else if(temp==2){
            pila2.push(temp);
        }
    }
    while(!(pila2.empty()||pila1.empty())){
        if (pila2.top()==2 && pila1.top()==1){
            pila1.pop();
            pila2.pop();
            t++;
        }
    }

    ll gr= floor((pila1.size()/3));
    t+= gr;
    printf("%lld", t);
    return 0;
}
