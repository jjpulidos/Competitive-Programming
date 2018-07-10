#include <bits/stdc++.h>

using namespace std;

int main() {
    //std::cin.sync_with_stdio(false);
    long long int n,b,h,w;

    while (scanf("%lld %lld %lld %lld", &n, &b , &h, &w) != EOF){
        //cin>>n>>b>>h>>w;
        bool flag3=false;
        long long min =2000000;
        for (int i=0;i<h;i++){
            long long p;
            cin>>p;

            for(int j=0;j<w;j++){
                long long a;
                cin>>a;
                if (a>=n){
                    if(p*n<=b){
                        if(p*n<min){
                            min=p*n;
                            flag3=true;
                        }
                    }
                }
            }

        }

        if(!flag3){
            cout<<"stay home"<<'\n';
        }else{
            cout<<min<<'\n';

        }

    }
    return 0;
}