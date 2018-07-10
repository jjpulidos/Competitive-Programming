#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,n;
    cin>>t;
    for(int i = 0; i<t;i++){
        cin>>n;
        priority_queue<int> pollo;
        for(int j = 0;j<n;j++){
            int temp;
            cin>>temp;
            pollo.push(temp);
        }
        int dist = 0;
        int t = pollo.size();
        for(int i = 0; i<t;i++){
            int temp = pollo.top();
            pollo.pop();
            int temp2 = pollo.top();
            dist += temp -temp2;
        }
        cout<<dist*2<<endl;

    }


    return 0;
}