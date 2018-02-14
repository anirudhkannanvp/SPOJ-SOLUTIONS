#include"bits/stdc++.h"
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,k,i,j,ans=0,a[1000005];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    cin>>k;
    for(i=0;i<=n-k;i++)
    {
    ans=a[i];
   for(j=1;j<k;j++)
    {
    if(ans<a[i+j])
        ans=a[i+j];
    }
    cout<<ans<<" ";
    }
return 0;
}