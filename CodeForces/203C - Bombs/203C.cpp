#include <bits/stdc++.h>

using namespace std;

int main() {
    long n, xi, yi, nAct = 0, aux = 0;
    vector<pair<long, pair<long, long>>> arr;
    string ans = "";
    
    scanf("%ld", &n);
    while(n--) {
        scanf("%ld %ld", &xi, &yi);
        arr.push_back(make_pair(abs(xi) + abs(yi), make_pair(xi,yi)));
        
                
        if (xi == 0 && yi == 0)
            nAct+=2;
        else if (xi == 0 || yi == 0)
            nAct+=4;
        else
            nAct+=6;
            
    }
    
    sort(arr.begin(), arr.end());
    
    bool flag, flagI;
    printf("%ld \n", nAct);
    
    for (int i = 0; i < arr.size(); i++) {
        flag = true;
        flagI = true;
            
        if (arr[i].second.first > 0)
            printf("1 %ld R \n", arr[i].second.first);
        if (arr[i].second.first < 0) {
            flag=false;
            printf("1 %ld L \n", -1*arr[i].second.first);
        }
            
        
        if (arr[i].second.second > 0)
            printf("1 %ld U \n", arr[i].second.second);
        if (arr[i].second.second < 0) {
            flagI=false;
             printf("1 %ld D \n", -1*arr[i].second.second);
        }
        
        printf("2 \n");
        
        if (flag && arr[i].second.first != 0)
            printf("1 %ld L \n", arr[i].second.first);
        else if (arr[i].second.first != 0)
            printf("1 %ld R \n", -1*arr[i].second.first);
            
        if (flagI && arr[i].second.second != 0)
            printf("1 %ld D \n", arr[i].second.second);
        else if (arr[i].second.second != 0)
            printf("1 %ld U \n", -1*arr[i].second.second);
            
        printf("3 \n");
    }
    
    
	return 0;
}