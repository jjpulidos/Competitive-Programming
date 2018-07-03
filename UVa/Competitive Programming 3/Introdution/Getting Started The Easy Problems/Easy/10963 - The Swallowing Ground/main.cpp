#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int w;
        bool flag = true;
        scanf("%d", &w);
        int temp;
        for (int i = 0; i < w; i++) {

            int y1, y2;
            scanf("%d %d", &y1, &y2);
            if (i==0) {
                temp = y1-y2;
            }else if(y1-y2!=temp){
            flag = false;
        }
    }
    if (flag) {
        printf("yes\n");

    }else{
        printf("no\n");
    }

        if (n){
            printf("\n");
        }



}


    return 0;
}
