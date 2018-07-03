#include <bits/stdc++.h>

using namespace std;
/* NO PUDE*/

int main() {
    int durationLoan,numberdeprec;
    double downpayment,amountLoan;
    bool flag=false;
    while(scanf("%d %lf %lf %d" ,&durationLoan, &downpayment, &amountLoan, &numberdeprec) >0){
        double amountLoanTotal = amountLoan;
        double temp;
        int month;
        int monthTemp=-1;
        for(int i = 0;true;i++){
            cout<<"amountLoan - downpayment: "<<amountLoanTotal-downpayment*i<<'\n';
            if(amountLoanTotal-downpayment*i<amountLoan){
                if(i<2){
                    cout<<i<<" month"<<'\n';
                    break;
                }
                cout<<i<<" months"<<'\n';
                break;
            }

            if(monthTemp==-1){
                cin>>month;
                monthTemp=month;

            }


            if(monthTemp!=i){
                //amountLoan+=downpayment;
                amountLoan-= (amountLoan*temp);
                cout<<"actualizacion amountLoan: "<<amountLoan<<'\n';
                cin.ignore();
                monthTemp= month;


            }else{
                double deprec;
                cin>>deprec;
                if(floor(month)==0){
                    amountLoan+=downpayment;
                    amountLoan-= (amountLoan*deprec);
                    cout<<"actualizacion amountLoan: "<<amountLoan<<'\n';
                    monthTemp=-1;
                }else{
                   // amountLoan+=downpayment;
                    amountLoan-= (amountLoan*deprec);
                    cout<<"actualizacion amountLoan: "<<amountLoan<<'\n';
                    monthTemp=-1;
                }
                temp=deprec;

            }


        }
    }
    return 0;
}