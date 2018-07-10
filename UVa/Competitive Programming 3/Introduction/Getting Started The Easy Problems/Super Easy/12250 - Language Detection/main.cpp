#include <iostream>
using namespace std;

int main() {
    for(int i = 1; true; i++){
        string phrase;
        cin>>phrase;
        if(phrase=="HELLO"){
            cout<<"Case "<<i<<": ENGLISH"<<'\n';
        }else if(phrase=="HOLA"){
            cout<<"Case "<<i<<": SPANISH"<<'\n';
        }else if(phrase=="HALLO"){
            cout<<"Case "<<i<<": GERMAN"<<'\n';
        }else if(phrase=="BONJOUR"){
            cout<<"Case "<<i<<": FRENCH"<<'\n';
        }else if(phrase=="CIAO"){
            cout<<"Case "<<i<<": ITALIAN"<<'\n';
        }else if(phrase=="ZDRAVSTVUJTE"){
            cout<<"Case "<<i<<": RUSSIAN"<<'\n';
        }else if(phrase=="#"){
            break;
        }else{
            cout<<"Case "<<i<<": UNKNOWN"<<'\n';
        }
    }
    return 0;
}