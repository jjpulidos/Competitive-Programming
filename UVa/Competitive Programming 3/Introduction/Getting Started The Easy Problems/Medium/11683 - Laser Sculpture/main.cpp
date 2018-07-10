
/**
 * 495
 * Created by Juan Pulido on 4/07/2018
 */

#include <bits/stdc++.h>

using namespace std;

int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int height;
    while(scanf("%d",&height), height!=0){
        int length;
        scanf("%d",&length);
        int steps = 0;
        int currentUP;
        for (int i = 0; i< length; i++){
            int X_i;
            scanf("%d",&X_i);
            if (i ==0){
                currentUP = height-X_i;
                steps+=currentUP;
            }else if(height- X_i>currentUP){
                steps+=height-X_i-currentUP;
            }
            currentUP=height-X_i;
        }

        printf("%d\n",steps);
    }

    return 0;
}