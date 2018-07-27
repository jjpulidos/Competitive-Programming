/**
 * 661 - Blowing Fuses
 * Created by Juan Pulido on 6/07/2018
 */
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = (int)1e9;
int main() {
    int n, m, c;
    int count = 1;

    while (scanf("%d %d %d", &n, &m, &c), n > 0 && m > 0 && c > 0) {
        bool blown = false;
        int amperios[n] ={};
        bool states[n]={};
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            int amp;
            cin >> amp ;
            amperios[i]=amp;
        }
        int sum = 0;
        for (int k = 0; k < m; k++) {
            int oper;
            cin>>oper;
            oper--;
            if(blown) continue;
            if(!states[oper]){
                sum+=amperios[oper];
                states[oper]=true;
            }else{
                sum-=amperios[oper];
                states[oper]=false;
            }
            if(sum>c){
                blown = true;
            }else{
                if (maxi<sum){
                    maxi = sum;
                }
            }

        }

        cout<<"Sequence "<<count<<'\n';
        if(blown){
            cout<<"Fuse was blown."<<'\n';
        }else{
            cout<<"Fuse was not blown."<<'\n';
            cout<<"Maximal power consumption was "<< maxi<<" amperes."<<'\n';
        }
        count++;
        cout<<endl;
    }

    return 0;
}