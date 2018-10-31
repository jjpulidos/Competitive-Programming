#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll m;

struct Matrix{
    long long mat[2][2];
};

Matrix matrixMultiplication(Matrix m,Matrix n,long long modulo)
{
    Matrix result;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            result.mat[i][j]=0;
            for(int k = 0; k < 2; k++){
                result.mat[i][j] = ((result.mat[i][j]%modulo)+(((m.mat[i][k]%modulo)*(n.mat[k][j]%modulo))%modulo))%modulo;
            }
        }
    }
    return result;
}

Matrix FiboMod(int n,long long m,Matrix A){
    if(n==1) return A;
    Matrix P = FiboMod(n>>1,m,A);
    P= matrixMultiplication(P,P,m);
    if(n&1) P=matrixMultiplication(P,A,m);
    return P;

}


int main() {
    Matrix A={1,1,1,0};
    int n;
    while(scanf("%d %lld",&n,&m)==2){
        long long ans = 1;
        m=1LL <<m;
        //cout<<m<<endl;
        if(n>1){
            Matrix respuesta = FiboMod(n-1,m,A);
            ans = respuesta.mat[0][0];
            printf("%lld\n",ans);
        }else if(n==0||m==1){
            printf("%lld\n",0LL);
        }else{
            printf("%lld\n",ans);
        }
    }

    return 0;
}