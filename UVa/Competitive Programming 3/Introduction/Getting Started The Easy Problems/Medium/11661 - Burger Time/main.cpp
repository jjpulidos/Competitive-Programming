/**
 * 11661 - Burger Time?
 * Created by Juan Pulido on 6/07/2018
 */


typedef long long ll;
typedef long double ld;

#define mp make_pair
#define pb push_back
#define f first
#define s second


#include <bits/stdc++.h>

const ll MOD = 1000000007;
const ll INF = 1e18;

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int l;
    while(cin>>l, l>0){
        ll distanceMIN = INF;
        ll distanceAUX = 0;
        bool conteo=false;
        int encontrado =0;
        for (int i =0 ; i<l;i++){
            char temp;
            cin>>temp;
            if(temp=='Z'){
                distanceMIN=0;
            }else if(temp=='.'&&conteo){
                distanceAUX++;
            }else if(temp=='R'){
                //encontrado =1;
                //1 es restaurante
                conteo =true;
                if( encontrado == 1){
                    distanceAUX=0;
                    distanceAUX++;
                }else if(encontrado == 2){
                    //2 es farmacia

                    if(distanceAUX<distanceMIN) distanceMIN= distanceAUX;

                    distanceAUX=0;
                    distanceAUX++;
                    encontrado=1;
                }else{
                    distanceAUX++;
                    encontrado=1;
                }
            }else if(temp=='D'){
                conteo =true;
                if( encontrado == 2){
                    //2 es farmacia
                    distanceAUX=0;
                    distanceAUX++;
                }else if(encontrado==1){
                    //1 es restaurante

                    if(distanceAUX<distanceMIN) distanceMIN= distanceAUX;

                    distanceAUX=0;
                    distanceAUX++;
                    encontrado=2;
                }else{
                    distanceAUX++;
                    encontrado=2;
                }
            }

        }
        cout<<distanceMIN<<'\n';
    }

    return 0;
}