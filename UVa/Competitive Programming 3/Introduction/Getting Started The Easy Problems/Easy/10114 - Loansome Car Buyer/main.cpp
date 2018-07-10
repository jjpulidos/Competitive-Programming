#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = (int)1e9;

int main() {
    int months_loan,deprec_records ;
    double down_payment, amount_loan;
    while(scanf("%d %lf %lf %d",&months_loan,&down_payment,&amount_loan,&deprec_records),months_loan>0){

        double carPrice = down_payment+amount_loan;
        int current = 0;
        double currentDep[months_loan+5]={};
        double paidMonth = (amount_loan/months_loan);
        amount_loan+=paidMonth;
        int monthNumber;
        double depPercentage;
        for (int i = 0;i<deprec_records;i++) {
            scanf("%d %lf", &monthNumber, &depPercentage);
            currentDep[monthNumber]=depPercentage;

        }
        double dcurrent = 0;
        for(int j = 0;true;j++){
            dcurrent= currentDep[j]==0 ? dcurrent : currentDep[j];
            carPrice-=(carPrice*dcurrent);
            amount_loan-=paidMonth;
            if(carPrice>amount_loan)break;
            current++;
        }
        if(current==1){
            cout<<current<<" month"<<'\n';
        }else{
            cout<<current<<" months"<<'\n';
        }

    }
    return 0;
}