#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int bal = 0;
    for(int i = 0; i<n; i++){
        string oper;
        int k;
        cin>>oper;
        if (oper == "donate"){
            cin>>k;
            bal += k;
        }else if (oper == "report"){
            cout<<bal<<'\n';
        }
    }
    return 0;
}