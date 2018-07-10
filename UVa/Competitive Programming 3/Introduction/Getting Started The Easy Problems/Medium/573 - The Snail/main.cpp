/**
 * 573 - The Snail
 * Created by Juan Pulido on 6/07/2018
 */
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
    double H,U,D,F;
    while(cin>>H>>U>>D>>F,H>0){
        double fatigue = F*U/100.0;
        double current=0;
        bool win =false;
        ll days;
        for(days = 1; true;days++){
            if(days>1){
                if(U-fatigue>=0){
                    U-=fatigue;
                }else{
                    U=0;
                }

            }
            current+=U;
            if(current >H){
                win=true;
                break;
            }
            current-=D;
            if(current<0){
                break;
            }
        }
        if(win) printf("success on day %lld\n",days);
        else printf("failure on day %lld\n",days);
    }
    return 0;
}