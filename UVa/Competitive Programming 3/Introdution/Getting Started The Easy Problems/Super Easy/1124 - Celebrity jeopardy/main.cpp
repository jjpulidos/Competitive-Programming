#include <iostream>
using namespace std;

int main() {
    while (true){
        string eq;
        getline(cin,eq);
        if(eq ==""){
            break;
        }else{
            cout<<eq<<'\n';
        }

    }
    return 0;
}