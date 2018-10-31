#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,k;
    cin>>n>>k;

    int min_Contest = 240-k; //18
    int min_Consumidos= 0;
    int i;
    if(min_Contest>=5){
        for(i =1; i<n; i++){
            min_Consumidos += 5*i;
            if((min_Consumidos +(5*(i+1))> min_Contest)){
                cout<<i<<endl;
                return 0;
            }

        }
        cout<<i<<endl;
        return 0;

    }else{
        cout<<0<<endl;
        return 0;
    }

}
