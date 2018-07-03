#include <iostream>
using namespace std;

int main() {
    int testcases;
    cin>>testcases;
    for(int i = 0;i<testcases;i++){
        string num;
        cin>>num;
        if (num.find("one")!= std::string::npos||num.find("ne")!= std::string::npos||num.find("on")!= std::string::npos||(num[0]=='o' && num[2]=='e')){
            cout<<1<<'\n';
        }else if((num.length()==3)){
            cout<<2<<'\n';
        }else{
            cout<<3<<'\n';
        }

    }
    return 0;
}