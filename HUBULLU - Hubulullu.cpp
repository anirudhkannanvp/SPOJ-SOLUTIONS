#include "bits/stdc++.h"
using namespace std;
int LCS(char a[],char b[], int n,int m){
    int L[n+1][m+1],i,j,index,index1;
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            if(i==0 || j==0) L[i][j]=0;
            else if(a[i-1]==b[j-1]) L[i][j]=1+L[i-1][j-1];
            else L[i][j]=max(L[i][j-1],L[i-1][j]);
        }
    }
return L[n][m];    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,m,i,j,t;
    cin>>t;
    while(t--){
    char a[10000],b[10000];
    cin>>a;
    n=0;
    for(i=0;a[i]!=0;i++)
        n+=1;
    for(i=0;i<n;i++){
        b[i]=a[n-i-1];
    }
    cout<<n-LCS(a,b,n,n)<<"\n";
    }
        return 0;
}
