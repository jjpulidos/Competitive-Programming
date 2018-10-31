#include <bits/stdc++.h>

using namespace std;


double method(double x,double y,double c,double d){

    return ((1/(pow((x*x-d*d),0.5)))+((1/(pow((y*y-d*d),(0.5))))-(1/c)));
}


int main() {

    int cases;
    int i = 1;
    cin>>cases;


    while(i<=cases){

        double x, y, c;
        cin>>x;
        cin>>y;
        cin>>c;

        double high;
        high=min(x,y);

        double low=0;
        double EPS=0.00000000000001;
        double d=(high+low)/2;

        while (abs(method(x,y,c,d))>EPS){
            if (method(x,y,c,d)>0){
                high=d;
            }else{
                low=d;

            }
            d=(high+low)/2;
        }
        cout.precision(10);
        cout<<"Case "<<i<<": "<<d<<endl;

        i++;
    }




    return 0;
}