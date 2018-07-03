#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 1; true; i++){
        string input;
        cin>>input;
        if (input=="Hajj"){
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<'\n';
        }else if(input=="Umrah"){
            cout<<"Case "<<i<<": Hajj-e-Asghar"<<'\n';
        }else{
            break;
        }
    }
    return 0;
}