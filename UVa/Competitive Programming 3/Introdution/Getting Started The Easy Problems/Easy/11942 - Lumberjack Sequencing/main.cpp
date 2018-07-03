#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    cout<<"Lumberjacks:"<<'\n';
    for (int i = 0; i<n;i++){
        int test=0;
        int up =0;
        int down =0;

        for (int j=0; j<10;j++){
            int temp;
            cin>>temp;
            if (j==0){
                test=temp;
            }else if(temp>test){
                test=temp;
                up++;

            }else if(temp<test){
                test=temp;
                down++;
            }else{
                test=temp;
                up++;
                down++;
            }
        }
        if(down==9||up==9){
            cout<<"Ordered"<<'\n';
        }else{
            cout<<"Unordered"<<'\n';
        }
    }
    return 0;
}