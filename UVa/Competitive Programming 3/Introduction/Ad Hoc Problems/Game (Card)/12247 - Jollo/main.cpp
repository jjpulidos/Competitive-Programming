/**
 * 12247 - Jollo
 * Created by Juan Pulido on 18/07/2018
 */
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = (int)1e9;


int main() {
    ll a,b,c,x,y;
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&x,&y),a!=0){
        ll arr[5]={a,b,c,x,y};
        sort(arr,arr+5);
        if(((arr[1]==x&&arr[0]==y)||(arr[1]==y && arr[0]==x)) ||
           ((arr[3]==x&&arr[1]==y)||(arr[3]==y && arr[1]==x)) || ((arr[3]==x&&arr[0]==y)||(arr[3]==y && arr[0]==x)) ||
           ((arr[0]==x&&arr[2]==y)||(arr[0]==y && arr[2]==x)) || (arr[1]==x&&arr[2]==y)||(arr[1]==y && arr[2]==x)){
            cout<<-1<<'\n';
        }else if((arr[0]==x&&arr[4]==y)||(arr[0]==y && arr[4]==x) ||
                 (arr[1]==x&&arr[4]==y)||(arr[1]==y && arr[4]==x)){
            ll ans = max(a,b);
            ans = max(ans,c)+1;
            while(ans ==x || ans==y){
                ans++;
            }
            if(ans>52){
                cout<<-1<<'\n';
            }else{
                cout<<ans<<'\n';
            }
        }else if(((arr[3]==x&&arr[4]==y)||(arr[3]==y && arr[4]==x))) {
            ll ans = 1LL;
            while(ans ==x || ans==y || ans ==a||ans ==b||ans ==c){
                ans++;
            }
            if(ans>52){
                cout<<-1<<'\n';
            }else{
                cout<<ans<<'\n';
            }
        }else{

            ll ans = max(min(a,b),min(max(a,b),c))+1;
            while(ans ==x || ans==y || ans ==a||ans ==b||ans ==c){
                ans++;
            }
            if(ans>52){
                cout<<-1<<'\n';
            }else{
                cout<<ans<<'\n';
            }
        }
    }

    return 0;
}