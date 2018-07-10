#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    priority_queue<int> sal;
    for (int i= 1;i<=t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        sal.push(a);
        sal.push(b);
        sal.push(c);
        sal.pop();
        cout<<"Case "<<i<<": "<<sal.top()<<'\n';
        sal.pop();
        sal.pop();

    }
    return 0;
}