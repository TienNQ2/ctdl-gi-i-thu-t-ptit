#include <bits/stdc++.h>
using namespace std;
#define ll long long

char x[100];
int n;
void out ()
{
    for(int i=1;i<=n;i++)
    {
        cout << x[i] ;
    }
    cout << " ";
}

void Try (int i)
{
    for(char j='A';j<='B';j++)
    {
        x[i]=j;
        if(i==n) out();
        else
            Try(i+1);
    }
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        cin >> n;
        Try(1);
        cout << endl;
    }

    return 0;
}

