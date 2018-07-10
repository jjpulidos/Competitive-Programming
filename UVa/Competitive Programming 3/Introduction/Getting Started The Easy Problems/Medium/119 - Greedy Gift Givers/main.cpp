/**
 * 119 - Greedy Gift Givers
 * Created by Juan Pulido on 6/07/2018
 */
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = (int)1e9;

int main() {

    int people_num;
    if(scanf("%d",&people_num)==EOF)return 0;
    while(true) {
        cin.ignore();
        map<string,int> gifti;
        string arr[people_num];
        for(int k = 0; k<people_num;k++){
            string tmp;
            cin>>tmp;
            arr[k]=tmp;
            gifti[tmp]=0;
        }
        cin.ignore();
        for(int j = 0; j<people_num;j++) {
            string line;
            getline(cin,line);
            size_t pos = 0, found;
            vector<string> listaLinea;
            while((found = line.find_first_of(' ', pos)) != string::npos) {
                listaLinea.push_back(line.substr(pos, found - pos));
                pos = found+1;
            }
            listaLinea.push_back(line.substr(pos));
            string name=listaLinea[0];
            int money= stoi(listaLinea[1]);
            int n=stoi(listaLinea[2]);
            int mon_gifted;
            if(n>0){
                mon_gifted  =(int) floor(money/n);
                gifti[name]-=mon_gifted*n;
            }

            for (int i = 3;i<n+3;i++) {
                gifti[listaLinea[i]]+=mon_gifted;
            }
        }
        for(int t = 0; t< people_num;t++){
            cout<<arr[t]<<" "<<gifti[arr[t]]<<'\n';
        }
        if(scanf("%d",&people_num)==EOF){
            break;
        }
        cout<<'\n';
    }
    return 0;
}