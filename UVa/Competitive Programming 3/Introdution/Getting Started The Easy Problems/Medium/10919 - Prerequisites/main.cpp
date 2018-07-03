#include <bits/stdc++.h>

using namespace std;

int main() {

 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);

    int k;
    while (scanf("%d", &k),k!= 0) {
        int m;
        scanf("%d",&m);
        map<int,int> courses;

        for (int i = 0; i < k; i++) {
            int k_i;
            scanf("%d", &k_i);
            courses[k_i]++;
        }
        bool posible_graduacion = true;
        while(m--) {
            int c,r;
            scanf("%d %d", &c, &r);
            while(c--){
                int c_i;
                scanf("%d", &c_i);
                if(courses[c_i]==1){
                    r--;
                }
            }
            if (r >0&& posible_graduacion){
                puts("no");
                posible_graduacion= false;
            }
        }
        if (posible_graduacion) puts("yes");
    }
    return 0;
}