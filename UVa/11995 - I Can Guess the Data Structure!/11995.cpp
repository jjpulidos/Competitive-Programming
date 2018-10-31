#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (scanf("%d", &n)!=EOF){
        bool st = true;
        bool col = true;
        bool heappq = true;
        stack<int> pila;
        queue<int> cola;
        priority_queue<int> he;

        for(int i = 0;i<n;i++){
            int pr,num;
            scanf("%d %d", &pr, &num);
            if(pr == 1){
                pila.push(num);
                cola.push(num);
                he.push(num);
            }

            else if (pr==2)
            {

                if(!pila.empty() && pila.top()!=num)
                {
                    st=false;
                }
                else
                {
                    if(!pila.empty()){
                        pila.pop();
                    }
                    else{
                        st=false;
                    }

                }
                if(!cola.empty() && cola.front()!=num)
                {

                    col=false;
                }
                else
                {
                    if(!cola.empty()){
                        cola.pop();

                    }
                    else{
                        col=false;
                    }
                }
                if(!he.empty() && he.top()!=num)
                {
                    heappq=false;
                }
                else
                {
                    if(!he.empty()){
                        he.pop();
                    }
                    else{
                        heappq=false;
                    }
                }
            }
        }
        if ((st && col)||(st&&heappq)||(col&&heappq))
        {
            puts("not sure");
        }
        else if(!(st ||col||heappq))
        {
            puts("impossible");
        }
        else if(heappq)
        {
            puts("priority queue");
        }
        else if(col)
        {
            puts("queue");
        }
        else if(st)
        {
            puts("stack");
        }
    }
    return 0;
}
