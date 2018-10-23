#include <bits/stdc++.h>
using namespace std;
char str1[1001];
char str2[1001];
int tabla[1001][1001];
int main(){

   // freopen("myInput.txt","r",stdin);
    //freopen("myOutput.txt","w",stdout);
    while(gets(str1)){
        gets(str2);

        int lenstr1 = strlen(str1);
        int lenstr2 = strlen(str2);

        for (int i = 1; i<=lenstr1; i++){
            for (int j = 1; j<=lenstr2;j++){
                if(str1[i-1]==str2[j-1]){
                    tabla[i][j]=tabla[i-1][j-1]+1;
                }else{
                    tabla[i][j]= max(tabla[i-1][j],tabla[i][j-1]);
                }
            }
        }
        printf("%d\n",tabla[lenstr1][lenstr2]);
    }

    return 0;
}