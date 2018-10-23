#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
ll m;

struct Matrix{
    unsigned long long mat[3][3];
};

Matrix matrixMultiplication(Matrix m,Matrix n,unsigned long long modulo)
{
    Matrix result;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j <3; j++){
            result.mat[i][j]=0;
            for(int k = 0; k <3; k++){
                result.mat[i][j] = ((result.mat[i][j]%modulo)+(((m.mat[i][k]%modulo)*(n.mat[k][j]%modulo))%modulo))%modulo;
            }
        }
    }
    return result;
}

Matrix FiboMod(ll n,unsigned long long m,Matrix A){
    if(n==1) return A;
    Matrix P = FiboMod(n>>1,m,A);
    P= matrixMultiplication(P,P,m);
    if(n&1) P=matrixMultiplication(P,A,m);
    return P;

}


int main() {
    Matrix A={1,1,1,1,0,0,0,1,0};
    ll n;
    ll m = 1000000009;
    //m=1LLU <<m;
    while(true){
        scanf("%lld",&n);
        if(n==0){
            break;
        }
        ll ans = 1;

        //cout<<m<<endl;
        if(n>1){
            Matrix respuesta = FiboMod(n,m,A);
            ans = respuesta.mat[1][1];
            //cout<<ans<<endl;
            printf("%lld\n",ans);
        }else{
            printf("%lld\n",0LLU);
        }
    }

    return 0;
}