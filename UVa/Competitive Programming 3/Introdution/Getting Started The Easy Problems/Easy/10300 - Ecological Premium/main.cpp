#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i = 0; i< n; i++){
        long long sum=0;
        int c;
        cin>>c;
        for(int j=0;j<c;j++){
            long long a,b,c;
            cin>>a>>b>>c;
            sum+= a*c;
        }
        cout<<sum<<'\n';
    }
    return 0;
}