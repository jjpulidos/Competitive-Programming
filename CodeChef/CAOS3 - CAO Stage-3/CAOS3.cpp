#include <bits/stdc++.h>
using namespace std;

int dp[21][21][21][21];
char dungeon[21][21];

int estadoActual(int x1, int x2, int y1, int y2){
    if(x1>x2 || y1>y2)return 0;
    int &retorno = dp[x1][x2][y1][y2];
    if(retorno!=-1)return retorno;
    retorno=0;
    set<int> enemigos;
    for(int i = x1; i<=x2;i++){
        for(int j = y1 ; j<=y2;j++){
            if(dungeon[i][j]==2){
                int valorEstado = estadoActual(x1,i-1,y1,j-1); //1er cuadrante
                valorEstado^= estadoActual(i+1,x2,y1,j-1); //2do cuadrante
                valorEstado^= estadoActual(x1,i-1,j+1,y2); //3er cuadrante
                valorEstado^= estadoActual(i+1,x2,j+1,y2); //4to cuadrante
                enemigos.insert(valorEstado);
            }
        }
    }
    for(int valorEstadoEnemigos : enemigos){
        if(retorno!=valorEstadoEnemigos) break;
        retorno++;
    }
    return retorno;
}
int main(){

    //freopen("myInput.txt","r",stdin);
    //freopen("myOutput.txt","w",stdout);
    int T;
    scanf("%d",&T);
    while(T--){
        memset(dp,-1, sizeof(dp)); //todo en -1 para tenerlo en posicion inicial
        int r,c;
        scanf("%d %d",&r,&c);
        for(int b = 0; b<r;b++){
            cin>>dungeon[b];
        }
        //int dp[21][21][21][21]={}; mal, si inicia en ceros se va a la verga porque me diría que siempre pierde Asuna
        /*
        char temp;
        scanf("%c",&temp);
        for(int k = 0; k<r;k++){
                for(int j = 0; j<c;j++){
                    scanf("%c",&temp);
                    dungeon[k][j]=(temp==35) ? 1:0;
                   // printf("%d ",dungeon[k][j]);
                }
            scanf("%c",&temp);
            //printf("\n");
        }
        //printf("\n");
         */
        for(int i = 0; i<r;i++){
            for(int j = 0; j<c;j++){
                if(dungeon[i][j]!=35){
                    if(((j>1&&j<c-2)&&((((dungeon[i][j-1]!=35))||dungeon[i][j-1]==2)&&
                       (((dungeon[i][j-2]!=35))||dungeon[i][j-2]!=35)&&
                       (((dungeon[i][j+1]!=35))||dungeon[i][j+1]!=35)&&
                       (((dungeon[i][j+2]!=35))||dungeon[i][j+2]!=35)))&&
                       ((i>1&&i<r-2)&& (((dungeon[i-1][j]!=35))||dungeon[i-1][j]==2)&&
                       (((dungeon[i-2][j]!=35))||dungeon[i-2][j]==2)&&
                       (((dungeon[i+1][j]!=35))||dungeon[i+1][j]==2)&&
                       (((dungeon[i+2][j]!=35))||dungeon[i+2][j]==2))){
                        dungeon[i][j]=2;
                    }
                }

                //printf("%d ",dungeon[i][j]);
            }
            //printf("\n");
        }
        int winner = estadoActual(0,r-1,0,c-1);
        if (winner!=0){
            puts("Asuna\n");
        }else{
            puts("Kirito\n");
        }
    }

    return 0;
}
