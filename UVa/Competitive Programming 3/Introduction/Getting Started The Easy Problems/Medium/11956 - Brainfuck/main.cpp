/**
 * Test
 * Created by Juan Pulido on 6/07/2018
 */
#include <bits/stdc++.h>

using namespace std;

int mod (int a, int b) { return a >= 0 ? a % b : ( b - abs ( a%b ) ) % b; }

int main() {
    int testcases;
    cin>>testcases;
    cin.ignore(100, '\n');
    string line;
    for(int i = 1; i<=testcases;i++){

        int cells[100]={};
        int pointer =0;

        getline(cin, line);
        for (int k = 0; k<line.size();k++){
            if(line[k]=='+'){
                cells[pointer]=mod(++cells[pointer],256);
            }else if (line[k]=='-'){
                cells[pointer]=mod(--cells[pointer],256);
            }else if(line[k]=='<'){
                pointer=mod(--pointer,100);
            }else if(line[k]=='>'){
                pointer=mod(++pointer,100);
            }
        }
        cout<<"Case "<<i<<":";
        for(int j = 0; j<100;j++){
            printf(" %02X",cells[j]);
        }
        cout<<endl;
    }
    return 0;
}