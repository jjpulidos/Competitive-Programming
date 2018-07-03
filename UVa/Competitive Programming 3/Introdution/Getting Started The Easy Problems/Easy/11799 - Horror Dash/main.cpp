#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i = 1; i<=n;i++){
        int num;
        cin>>num;
        priority_queue<int> pq;
        for (int i = 0; i<num;i++){
            int temp;
            cin>>temp;
            pq.push(temp);
        }
        cout<<"Case "<<i<<": "<<pq.top()<<'\n';
    }

    return 0;
}