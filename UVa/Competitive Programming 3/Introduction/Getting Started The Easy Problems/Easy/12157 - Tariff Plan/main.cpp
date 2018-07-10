#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin>>t;
    for (int i = 1;i<=t;i++) {
        int n;
        cin >> n;
        int mile = 0;
        int juice = 0;
        for (int j = 0; j < n; j++) {
            double temp;
            cin>>temp;
            int calc=((ceil(temp / 30)) * 10);

            if(int(temp)%30==0){
                calc+=10;
            }
            mile += calc;

            int calc2=((ceil(temp / 60)) * 15);
            if(int(temp)%60==0){
                calc2+=15;
            }
            juice += calc2;
        }

        if (mile==juice){
            cout<<"Case "<<i<<": "<<"Mile "<<"Juice "<<juice<<'\n';
        }else if(mile<juice){
            cout<<"Case "<<i<<": "<<"Mile "<<mile<<'\n';
        }else{
            cout<<"Case "<<i<<": "<<"Juice "<<juice<<'\n';
        }
    }
    return 0;
}