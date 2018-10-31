#include <iostream>
#include <queue>
#include <stack>


using namespace std;

int main(){
    
    int set, n, s, q;
    cin>>set;
    
    for(int a=0; a<set; a++){
        stack<int> carrier;
        queue<int> stQueue[100];
        int sz, tag;
        cin>>n>>s>>q;
        
        for(int b=0; b<n; b++){
            cin>>sz;
            
            for(int c=0; c<sz; c++) {
                cin>>tag;
                stQueue[b].push(tag-1);
                
            }

        }
        int currentSt = 0;
        int tiempo = 0;
        
        while(true){
            //Reinicio de conteo de estacion
            if(currentSt >= n){
                currentSt = 0;
            }
            //proceso de descarga 
            while(!carrier.empty() && (stQueue[currentSt].size()<q || carrier.top()==currentSt)){
                if(carrier.top()!=currentSt){
                    stQueue[currentSt].push(carrier.top());
                }
                carrier.pop();
                tiempo++;
            }    
            
            //proceso de carga
            while(!stQueue[currentSt].empty() && carrier.size()<s){
                carrier.push(stQueue[currentSt].front());
                stQueue[currentSt].pop();
                tiempo++;
            }
            
            bool emptyC = carrier.empty();
            bool emptyQ = true;
            for(int i=0; i<n; i++){
                if(!stQueue[i].empty()){
                    emptyQ = false;
                }
            }
            if (emptyC && emptyQ){break;}
            
            currentSt++;
            tiempo+=2;
        }
        
        cout<<tiempo<<endl;
    }
    return 0;
}