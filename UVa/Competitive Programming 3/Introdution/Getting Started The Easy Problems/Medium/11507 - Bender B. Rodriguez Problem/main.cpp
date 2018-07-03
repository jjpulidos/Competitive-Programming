#include <bits/stdc++.h>

using namespace std;

int main() {
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int L;
    enum State { xpos, xneg, ypos, yneg, zpos, zneg };
    map <string, State > conv= {make_pair("+x",xpos),make_pair("+y",ypos),make_pair("+z",zpos),
                                make_pair("-x",xneg),make_pair("-y",yneg),make_pair("-z",zneg)};
    map <State, string > ret= {make_pair(xpos,"+x"),make_pair(ypos,"+y"),make_pair(zpos,"+z"),
                                make_pair(xneg,"-x"),make_pair(yneg,"-y"),make_pair(zneg,"-z")};
    while(scanf("%d",&L),L!=0){
        L--;
        State dir = xpos;
        while(L--){
            string operation;
            cin>>operation;
            switch(conv[operation]){
                case ypos:
                    //init ==zpos || init == zneg -> se mantiene
                    if (dir ==ypos){
                        dir = xneg;
                    }else if(dir == yneg){
                        dir = xpos;
                    }else if(dir ==xpos){
                        dir = ypos;
                    }else if(dir ==xneg){
                        dir = yneg;
                    }
                    break;
                case yneg:
                    //init ==zpos || init == zneg -> se mantiene
                    if (dir ==ypos){
                        dir = xpos;
                    }else if(dir == yneg){
                        dir = xneg;
                    }else if(dir ==xpos){
                        dir = yneg;
                    }else if(dir ==xneg){
                        dir = ypos;
                    }
                    break;
                case zpos:
                    //init ==ypos || init == yneg -> se mantiene
                    if (dir ==xpos){
                        dir = zpos;
                    }else if(dir == xneg){
                        dir = zneg;
                    }else if(dir ==zpos){
                        dir = xneg;
                    }else if(dir ==zneg){
                        dir = xpos;
                    }
                    break;
                case zneg:
                    //init ==ypos || init == yneg -> se mantiene
                    if (dir ==xpos){
                        dir = zneg;
                    }else if(dir == xneg){
                        dir = zpos;
                    }else if(dir ==zpos){
                        dir = xpos;
                    }else if(dir ==zneg){
                        dir = xneg;
                    }
                    break;
                default:
                    break;
            }
        }
        cout<<ret[dir]<<'\n';
    }
    return 0;
}