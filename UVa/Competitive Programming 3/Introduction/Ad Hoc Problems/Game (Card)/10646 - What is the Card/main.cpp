/**
 * 10646 - What is the Card?
 * Created by Juan Pulido on 17/07/2018
 */
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = (int)1e9;

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int points;
    string line;
    int casos;
    cin>>casos;
    cin.ignore();
    for(int t = 1;t<=casos;t++){
        getline(cin,line);
        size_t pos = 0, found;
        vector<string> listaLinea;
        while((found = line.find_first_of(' ', pos)) != string::npos) {
            listaLinea.push_back(line.substr(pos, found - pos));
            pos = found+1;
        }
        listaLinea.push_back(line.substr(pos));
        points = 0;
        char tmp;
        int pointer = 26;
        //reverse(listaLinea.begin(),listaLinea.end());
        for(int i = 0; i< 3; i++){
            tmp = listaLinea[pointer][0];
            if(tmp=='K'||tmp=='Q'||tmp=='A'||tmp=='J'|| tmp=='T'){
                points +=10;
                pointer--;
            }else{
                //cout<<"prueba "<<tmp-'0'<< " tmp: "<<tmp<<'\n';
                points+= tmp-'0';
                pointer-=(10-(tmp-'0'))+1;
            }
        }
        if(points<pointer+1){
            cout<<"Case "<<t<<": "<<listaLinea[points-1]<<'\n';
        }else{
            cout<<"Case "<<t<<": "<<listaLinea[points-pointer+25]<<'\n';
        }

    }
    return 0;
}