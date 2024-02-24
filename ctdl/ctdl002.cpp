#include<bits/stdc++.h>
using namespace std;
int n;
int a[100];
bool check=false;

void sinh ()
{
    int i=n;
    while(i>=1&&a[i]==1)
    {
        a[i]=0;
        i--;
    }
    if(i==0) check = true;
    else a[i]=1;
}
void res ()
{
    string s ;
    cin >> s;
    n=0;
    for(auto i:s)
    {
        if(i=='?') n++;
    }
    for(int i=1;i<=n;i++)
    {
        a[i]=0;
    }
    check=false;
    while(!check)
    {
       int x=1;
       for(auto i:s)
       {
           if(i=='?')
           {
               cout << a[x];
               x++;
           }
           else{
            cout <<i;
           }
       }
       cout << endl;
       sinh();
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
		res();
	}
}