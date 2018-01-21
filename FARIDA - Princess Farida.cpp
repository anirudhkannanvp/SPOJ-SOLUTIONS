#include"bits/stdc++.h"
using namespace std;

int main() {
    
    long long int arr[100005],n,t,i,ans[100005],j;
    cin>>t;
    for(j=0;j<t;j++){
        cin>>n;
        for(i=0;i<n;i++){cin>>arr[i];ans[i]=0;}
        if(n==0){
            cout<<"Case "<<j+1<<": 0"<<"\n";
        }
        else{
            ans[0]=arr[0];
            ans[1]=max(arr[0],arr[1]);
            for(i=2;i<n;i++){
                ans[i]=max(arr[i]+ans[i-2],ans[i-1]);
            }
        cout<<"Case "<<j+1<<": ";
        cout<<ans[n-1];
        cout<<"\n";
        }
    }
    return 0;
}
