/**
 * 10324 - Zeros and Ones
 * Created by Juan Pulido on 6/07/2018
 */
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = (int)1e9;

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string line;
    int j = 1;
    while(cin>>line){
        int n;
        cin>>n;
        cout<<"Case "<<j<<":"<<'\n';
        while(n--){
            int a , b;
            cin>>a>>b;
            int maxi = max(a,b);
            int mini = min(a,b);
            bool flag = true;
            char num=line[mini];
            for(int i = mini+1;i<=maxi;i++){
                if(line[i]!=num){
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout<<"Yes"<<'\n';
            }else{
                cout<<"No"<<'\n';
            }
        }
        cin.ignore();
        j++;
    }

    return 0;
}