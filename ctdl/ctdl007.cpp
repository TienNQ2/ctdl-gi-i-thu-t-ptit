#include <bits/stdc++.h>
using namespace std;
bool dp[16];
int n,x[16];
void in ()
{
    cin >> n;
    memset(dp,0,sizeof(dp));
}
void out ()
{
    for(int i=1;i<=n;i++)
    {
        cout << x[i];
    }
    cout << " ";
}
void Try (int i)
{
    for(int j=n;j>=1;j--)
    {
        if(dp[j]==0)
        {
            dp[j]=1;
            x[i]=j;
            if(i==n) out();
            else Try(i+1);
            dp[j]=0;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        in();
        Try(1);
        cout << endl;
    }
}
