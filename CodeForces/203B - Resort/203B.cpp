#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v[100020];
    vector<int> h;
    int current[100020],types[100020],j,maxi,startIndex,cn,n;
    cin>>n;
    for (int i = 1; i<= n; i++) cin>>types[i];
    for(int i = 1; i<=n;i++){
        cin>>current[i];
        if(current[i]) v[current[i]].push_back(i);
        if(types[i])h.push_back(i);
    }
    maxi = 0;
    startIndex= h[0];
    for(int i = 0; i<h.size();i++){
        j = h[i];
        cn = 0;
        while(v[current[j]].size()==1){
            j = current[j];
            cn++;
        }
        if(cn>maxi){
            startIndex=j;
            maxi = cn;
        }
    }
    cout<<maxi+1<<'\n';
    int t = startIndex;
    while(types[t]==0){
        cout<<t<<" ";
        t=v[t][0];
    }
    cout<<t<<'\n';
    return 0;
}