/**
 * 462 - Bridge Hand Evaluator
 * Created by Juan Pulido on 6/07/2018
 */
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = (int)1e9;

int main() {

    //freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int points,points_NOTRUMP;
    string line;
    while(getline(cin,line) ){
        size_t pos = 0, found;
        vector<string> listaLinea;
        while((found = line.find_first_of(' ', pos)) != string::npos) {
            listaLinea.push_back(line.substr(pos, found - pos));
            pos = found+1;
        }
        listaLinea.push_back(line.substr(pos));
        map<char,vector<char>> suites;
        points = 0;
        points_NOTRUMP=0;
        char suits[4]={'S','H','D','C'};
        bool all_Stopped = true;
        map<char,bool> sui_stopped;
        for(char suit: suits){
            sui_stopped[suit]=false;
        }
        for(int i = 0; i< 13; i++){
            if(listaLinea[i][0]=='K'){
                points += 3;
                suites[listaLinea[i][1]].push_back('K');
            }else if(listaLinea[i][0]=='Q'){
                points += 2;
                suites[listaLinea[i][1]].push_back('Q');
            }else if(listaLinea[i][0]=='A'){
                points += 4;
                suites[listaLinea[i][1]].push_back('A');
                sui_stopped[listaLinea[i][1]]= true;
            }else if(listaLinea[i][0]=='J'){
                points += 1;
                suites[listaLinea[i][1]].push_back('J');
            }else{
                suites[listaLinea[i][1]].push_back(listaLinea[i][0]);
            }
        }

        for(char suit: suits) {
            if (find(suites[suit].begin(), suites[suit].end(), 'K') != suites[suit].end()) {
                if (suites[suit].size() == 1) {
                    points -= 1;
                } else if (suites[suit].size() >= 2) {
                    sui_stopped[suit] = true;
                }
            }
            if (find(suites[suit].begin(), suites[suit].end(), 'Q') != suites[suit].end()) {
                if (suites[suit].size() == 1 || suites[suit].size() == 2) {
                    points -= 1;
                } else if (suites[suit].size() >= 3) {
                    sui_stopped[suit] = true;
                }
            }
            if (find(suites[suit].begin(), suites[suit].end(), 'J') != suites[suit].end()) {
                if (suites[suit].size() == 1 || suites[suit].size() == 2 ||suites[suit].size() == 3) {
                    points -= 1;
                }
            }
            if (suites[suit].size() == 1) {
                points += 2;
                points_NOTRUMP +=2;
            }
            if (suites[suit].size() == 2) {
                points += 1;
                points_NOTRUMP +=1;
            }
            if (suites[suit].empty()) {
                points += 2;
                points_NOTRUMP +=2;
            }
        }

        for(char suit: suits){
            if(!sui_stopped[suit]) all_Stopped=false;
        }
        if(points<14){
            cout<<"PASS"<<'\n';
        }else if(points-points_NOTRUMP>15 && all_Stopped){
            cout<<"BID NO-TRUMP"<<'\n';
        }else if(points>13){
            int maxi = -1;
            char suita;
            for(char suit: suits){
                if((int)suites[suit].size()>maxi) {
                    maxi = suites[suit].size();
                    suita = suit;
                }
            }
            cout<<"BID "<<suita<<'\n';
        }
    }
    return 0;
}