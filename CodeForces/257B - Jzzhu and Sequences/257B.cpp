#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define MAX_N 2
#define mod 1000000007

struct Matrix {
    ll mat[MAX_N][MAX_N];
};

Matrix matMul(Matrix a, Matrix b) { // O(n^3)
    Matrix ans;
    ll i, j, k;
    for (i = 0; i < MAX_N; i++)
        for (j = 0; j < MAX_N; j++)
            for (ans.mat[i][j] = k = 0; k < MAX_N; k++) // if necessary, use
                ans.mat[i][j] += (a.mat[i][k] * b.mat[k][j])%mod; // modulo arithmetic
    return ans;
}
Matrix matPow(Matrix base, ll p) { // O(n^3 log p)
    Matrix ans;
    ll i, j;
    for (i = 0; i < MAX_N; i++)
        for (j = 0; j < MAX_N; j++)
            ans.mat[i][j] = (i == j); // prepare identity matrix
    while (p) { // iterative version of Divide & Conquer exponentiation
        if (p & 1LL) ans = matMul(ans, base); // if p is odd (last bit is on)
        base = matMul(base, base); // square the base
        p >>= 1LL; // divide p by 2
    }
    return ans;
}
int main() {
    ll x,y,n;
    cin>>x>>y;
    cin>>n;
    Matrix m;
    m.mat[0][0]=0;
    m.mat[0][1]=1;
    m.mat[1][0]=-1;
    m.mat[1][1]=1;
    if (n==1){
        if(x<0){
            cout<<mod+x<<'\n';
        }else{
            cout<<x%mod<<'\n';
        }
    }else if(n == 2){
        if(y<0){
            cout<<mod+y<<'\n';
        }else{
            cout<<y%mod<<'\n';
        }
    }else{
        Matrix t = matPow(m,n-2);
        ll res = ((t.mat[1][0]*x)%mod+ (t.mat[1][1]*y)%mod)%mod;
        if(res<0){
            cout<<mod+res<<'\n';
        }else{
            cout<<res<<'\n';
        }

    }

    return 0;
}