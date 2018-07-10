#include <bits/stdc++.h>
using namespace std;

int main() {
    int b;
    int n;
    while(true){
        cin>>b>>n;
        if(b==0 && n==0){
            break;
        }
        vector<int> bancos;
        for (int i=0; i<b;i++){
            int temp;
            cin>>temp;
            bancos.push_back(temp);
        }
        for(int i= 0; i<n;i++) {
            int d, c, v;
            cin >> d >> c >> v;
            bancos[d-1] -= v;
            bancos[c-1] += v;
        }
            bool flag=false;
        for(int banco :bancos){
            if(banco<0){

                flag = true;

            }

        }
            if(flag){
                cout<<'N'<<'\n';
            }else{
                cout<<'S'<<'\n';
            }
        }

    return 0;
}