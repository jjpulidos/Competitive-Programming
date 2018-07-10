#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector <string> song {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    vector <string> people;
    for (int i = 0; i<n; i++){

        string strTemp;
        cin>>strTemp;
        people.push_back(strTemp);
    }
    int j=0;
    int t=0;
    for(int z = 0 ; z<(ceil(((double)people.size()/(double)song.size())))*16;z++){
        if (t==16){
            t=0;
        }
        if(j==people.size()){
            j=0;
        }
        cout<<people[j]<<": "<<song[t]<<'\n';

        j++;
        t++;
    }
    return 0;
}