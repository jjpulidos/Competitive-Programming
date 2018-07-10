#include <bits/stdc++.h>
using namespace std;
int main() {
    for (int k= 1; true;k++){
        int n;
        cin>>n;
        int balance = 0;
        if (n != 0){
            for(int i = 0; i<n;i++){
                int temp;
                cin>>temp;
                if(temp== 0){
                    balance--;
                }else{
                    balance++;
                }
            }
            cout<<"Case "<<k<<": "<<balance<<'\n';

        }else{
            break;
        }

    }


    return 0;
}