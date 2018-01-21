#include"bits/stdc++.h"
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    long int t,ans,no1,no2;
    char ch;
    cin>>t;
    while(t--){
        cin>>no1;
        ans=no1;
        while(1)
        {
            cin>>ch;
            if(ch=='=')
            break;
            cin>>no2;
            if(ch=='/')
            ans/=no2;
            else
            if(ch=='*')
            ans*=no2;
            else if(ch=='+')
            ans+=no2;
            else
            ans-=no2;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
