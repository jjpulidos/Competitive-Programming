#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> posAno = {31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
    int n;
    cin>>n;
    vector<int> test;
    for(int i = 0; i<n;i++){
        int temp;
        cin>>temp;
        test.push_back(temp);
    }
    int i = 0;
    for(int k = 0; k<135-n;k++){
        i=0;
        for(int j = 0;j<n;j++){
           if(test[j]==posAno[k+j]){
                i++;
            }else{
                i=0;
            }

        }
        if (i==n){
            cout<<"Yes"<<'\n';
            return 0;
        }
    }
    cout<<"No"<<'\n';
    return 0;
}