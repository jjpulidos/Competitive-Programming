#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;

bool criba[MAX];

void SieveEra(){
    for (int x=2;x<=MAX;x++){
        if(criba[x])continue;
        for(int u = 2*x; u<=MAX;u+=x){
            criba[u]=1;
        }
    }
}

int main(){
    SieveEra();
    int n;
    while(true){
        scanf("%d",&n);
        if (n==0){
            return 0;
        }
        int k =0;
        int p = 0;
        for (int i = 2; i<n;i++){
            if (!criba[i]){
                int temp=n-i;
                if(!criba[temp]){
                    k = temp;
                    p = i;
                    break;
                }
            }
        }

        if (k==0 &&p==0){
            puts("Goldbach's conjecture is wrong.");
        }else{
            printf("%d = %d + %d\n", n, p, k);
        }
    }
    return 0;
}