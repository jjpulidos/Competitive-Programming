#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i = 1 ; i<=t;i++){
        int n;
        cin>>n;
        int hj=0;
        int sj=0;
        int mem;
        cin>>mem;
        for(int j= 0;j<n-1;j++){
                int temp1;
                cin>>temp1;
                if(mem<temp1){
                    hj++;
                }else if(mem>temp1){
                    sj++;
                }
            mem=temp1;
        }
        cout<<"Case "<<i<<": "<<hj<<" "<<sj<<'\n';
    }
    return 0;
}