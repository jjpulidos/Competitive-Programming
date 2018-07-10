#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int count=0;
    while( getline( cin, s ) ) {
        if(s!=""){
            for(int i=0;i<s.length();i++){
                if(s[i]=='"'){
                    if(count==0){
                        cout<<"``";
                        count++;
                    }else{
                        cout<<"''";
                        count=0;
                    }
                }else{
                    cout<<s[i];
                }
            }
            cout<<'\n';
        }else{
            break;
        }

    }
    return 0;
}