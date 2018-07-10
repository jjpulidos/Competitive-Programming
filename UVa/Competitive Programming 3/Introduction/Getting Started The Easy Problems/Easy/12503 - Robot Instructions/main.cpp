#include <bits/stdc++.h>
using namespace std;
int a[10000000];
int main() {
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int t;
        cin>>t;
        int sum = 0;
        for(int j = 0;j<t;j++){
            string op;
            cin>>op;
            if(op=="LEFT"){
                sum-=1;
                a[j]=-1;
            }else if(op=="RIGHT"){
                sum+=1;
                a[j]=1;
            }else{
                string b;
                cin>>b;
                int num;
                cin>>num;
                sum+= a[num-1];
                a[j]=a[num-1];
            }
        }
        cout<<sum<<'\n';
    }
    return 0;
}