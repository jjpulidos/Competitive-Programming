#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    vector<char> s1;
    vector<char> s2;
    string s3;
    char tmp;
    bool flag = false;
    if(a-1>b) {
        cout<<"NO"<<'\n';
        return 0;
    }
    scanf("%c",&tmp);
    while(scanf("%c",&tmp),tmp!='*'&& tmp!='\n'){
        s1.push_back(tmp);
    }
    if(tmp!='\n'){
        while(scanf("%c",&tmp),tmp!='\n'){
            s2.push_back(tmp);
        }
    }else{
        flag = true;
    }

    cin>>s3;
    for(int i = 0; i< s1.size();i++){
        if(s3[i]!=s1[i]){
            cout<<"NO"<<'\n';
            return 0;
        }
    }
//    for(int i = s2.size(); i>0;i--){
//        cout<<s3[s3.size()-i]<<" ";
//    }
    for(int i = s2.size(); i>0;i--){
        //cout<<"s3[s3.size()-i+1] ->"<<s3[s3.size()-s2.size()-1+i]<<" s2[i] -> "<<s2[i-1]<<'\n';
        if(s3[s3.size()-s2.size()-1+i]!=s2[i-1]){
            cout<<"NO"<<'\n';
            return 0;
        }
    }
    if(flag&&s1.size()<s3.length()){
        cout<<"NO"<<'\n';
        return 0;
    }
    cout<<"YES"<<'\n';
//    for(char t: s1){
//        cout<<t;
//    }
//    cout<<'\n';
//    for(char t: s2){
//        cout<<t;
//    }
//    cout<<'\n';
    return 0;
}