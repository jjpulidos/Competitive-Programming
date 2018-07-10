/**
 * 10424 - Love Calculator
 * Created by Juan Pulido on 6/07/2018
 */
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = (int)1e9;

int sumita(string str) {
    int sum = 0, i = 0;
    for(i = 0; i < str.size(); i++) {
        char ch = str[i];
        if((ch>64 &&ch<91)||(ch>96&&ch<123)){
            ch =tolower(ch);
            sum += ch - 'a' + 1;
        }
    }
    return sum;
}

int numeroListo(int num){
    if(num<10) return num;
    return (numeroListo(int(floor(num/10)) + num%10));
}

int main() {
    string p1;
    while(getline(cin,p1)){
        string p2;
        getline(cin,p2);
        double numerito1 = numeroListo(sumita(p1));
        double numerito2 = numeroListo(sumita(p2));
        if (numerito2/numerito1*100<=100){
            printf("%0.2f %%\n",numerito2/numerito1*100);
        }else if(numerito1/numerito2*100<=100){
            printf("%0.2f %%\n",numerito1/numerito2*100);
        }else{
            printf("%0.2f %%\n",100.0);
        }
    }

    return 0;
}