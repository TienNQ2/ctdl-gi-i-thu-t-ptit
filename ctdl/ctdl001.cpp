#include <bits/stdc++.h>
using namespace std;
#define ll long long

int x[100];
int n;
void out ()
{
    for(int i=1;i<=n;i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}

void Try (int i)
{
    for(int j=0;j<=1;j++)
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
    }

    return 0;
}

