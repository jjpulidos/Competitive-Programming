#include <bits/stdc++.h>

using namespace std;

int main() {

    while (true){

        bool condicion = true;
        int vagones ;
        cin >> vagones;


        if (vagones == 0){
           break;

        }else{

           while(condicion) {

               queue<int> cola;
               stack<int> pila;

               for (int i = 1; i <= vagones; i++) {

                   int vagon;
                   cin >> vagon;

                   if (vagon == 0) {
                       cout << endl;
                       condicion = false;
                       break;
                   }

                   cola.push(vagon);

                   if (cola.front() == i) {
                       cola.pop();
                       while (!pila.empty()) {
                           if (cola.front() == pila.top()) {
                               cola.pop();
                               pila.pop();
                           } else {
                               break;
                           }
                       }
                   } else {
                       pila.push(i);
                   }
               }
               if (condicion) {

                    if (cola.empty() && pila.empty()) {
                            cout << "Yes" << endl;
                        } else {
                            cout << "No" << endl;
                    }
               }
           }
        }
    }
    return 0;
}