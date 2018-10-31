#include <bits/stdc++.h>

using namespace std;


int main() {


    while(true) {
        long num1, num2;
        cin >> num1 >> num2;
        if (num1 == 0) { break; }
        long centro = (num1 / 2) + 1;
        if (num2 == 1) {
            cout << "Line = " << centro << ", column = " << centro << "." << endl;
        } else {
            int num_anillosPosibles = centro - 1;
            int anillo;
            for (anillo = 1; anillo <= num_anillosPosibles; anillo++) {
                if (num2 <=(4 * pow(anillo, 2) + 4 * anillo + 1)) {
                    break;
                }
            }

            int posi;
            int posj;
            int pos_Max= (4 * pow(anillo, 2) + 4 * anillo + 1);
            int pos_3=(4 * pow(anillo, 2) + 2 * anillo + 1);
            int pos_2=(4 * pow(anillo, 2) + 1);
            int pos_1=(4 * pow(anillo, 2) - 2 * anillo + 1);

            if (num2 ==pos_1) {
                posi = (num1 - (num_anillosPosibles - anillo));
                posj = (num1 - (num_anillosPosibles + anillo));
            } else if (num2 ==pos_2) {
                posi = (num1 - (num_anillosPosibles + anillo));
                posj = (num1 - (num_anillosPosibles + anillo));
            } else if (num2 ==pos_3) {
                posi = (num1 - (num_anillosPosibles + anillo));
                posj = (num1 - (num_anillosPosibles - anillo));
            } else if (num2 ==pos_Max){
                posi = (num1 - (num_anillosPosibles - anillo));
                posj = (num1 - (num_anillosPosibles - anillo));
            } else if (num2 > pos_3) {

                posi = (num1 - (num_anillosPosibles - anillo)) - (pos_Max - num2);
                posj = (num1 - (num_anillosPosibles - anillo));

            } else if (num2 >( pos_2 )) {

                posi = (num1 - (num_anillosPosibles + anillo));
                posj = (num1 - (num_anillosPosibles - anillo)) - (pos_3 - num2);

            } else if (num2 > pos_1) {

                posi = (num1 - (num_anillosPosibles + anillo)) + ( pos_2 - num2);
                posj = (num1 - (num_anillosPosibles + anillo));

            } else {

                posi = (num1 - (num_anillosPosibles - anillo));
                posj = (num1 - (num_anillosPosibles + anillo)) + ( pos_1- num2);
            }

            cout << "Line = " << posi << ", column = " << posj << "." << endl;
        }

    }
    return 0;
}