#include <bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;

int main() {
    int n;
    scanf("%I64d", &n);
    int a[maxn],b[maxn];

    for(int i = 0;i<n;i++){
        scanf("%I64d %I64d",&a[i],&b[i]);
    }

    sort(a,a+n);
    sort(b,b+n);
    for(int i =0;i<n-2;i++) {
            if (a[i + 2] <= b[i]) {
                puts("NO");
                return 0;

        }
    }
        puts("YES");

    return 0;
}
