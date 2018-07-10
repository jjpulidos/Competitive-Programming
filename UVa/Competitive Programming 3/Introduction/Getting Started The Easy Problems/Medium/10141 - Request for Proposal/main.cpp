/**
 * 10141 - Request for Proposal
 * Created by Juan Pulido on 6/07/2018
 */
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = (int)1e9;

int main() {
    int n,p;
    int cuenta =1;
    cin>>n>>p;
    while(true){
        cin.ignore();
        if(n==0 &&p==0) break;
        for (int i = 0; i < n; i++){
            string req;
            getline(cin,req);
        }
        int maxi = 0;
        double mini = INF;
        string gana;
        for (int j = 0; j<p;j++){
            string prop;
            getline(cin,prop);
            double d;
            int r;
            cin>>d>>r;
            cin.ignore();
            int c = 0;
            for (int k = 0; k<r;k++){
                string met_req;
                getline(cin,met_req);
            }
            c = r;
            if(c >maxi){
                maxi = c;
                mini = d;
                gana = prop;
            }else if(c==maxi && d<mini){
                mini = d;
                maxi = c;
                gana = prop;
            }

        }

        cin>>n>>p;
        if(n==0 &&p==0){
            cout<<"RFP #"<<cuenta<<'\n';
            cout<<gana<<'\n';
            return 0;
        } else{
            cout<<"RFP #"<<cuenta<<'\n';
            cout<<gana<<'\n';
            cuenta++;
            cout<<'\n';
        }
    }
    return 0;
}