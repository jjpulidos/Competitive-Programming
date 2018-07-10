/**
 * Test
 * Created by Juan Pulido on 6/07/2018
 */
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
    int casos;
    scanf("%d",&casos);
    cin.ignore(casos,'\n');
    while(casos--){

        string line;
        getline(cin,line);
        ll male = 0;
        ll female =0;
        ll pieces = 0;
        for(int i = 0; i<line.size();i++){
            if(line[i]=='M')male++;
            if(line[i]=='F')female++;
            if((line[i]=='M'&&line[i+1]=='M')||(line[i]=='M'&&line[i+1]=='F')||(line[i]=='F'&&line[i+1]=='M')||
               (line[i]=='F'&&line[i+1]=='F')) pieces++;
        }
        if(male==female&&(pieces>1)){
            cout<<"LOOP"<<'\n';
        }else{
            cout<<"NO LOOP"<<'\n';
        }
    }
    return 0;
}