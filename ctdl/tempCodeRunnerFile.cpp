#include<bits/stdc++.h>

using namespace std;

*/ liet ke cac phan tu gom 0 va 9*/

int n;
vector<int> res;

void Try (int i)
{
    if(n>1e10) return ;
    res.push_back(i);
    Try (i*10);
    Try (i*10+9);
}

int main ()
{
    int t;
    cin >> t;
    Try(9);
    sort(res.begin(),res.end());
    while (t--)
    {
        int n;
        cin >> n;
        for(int i=0 ; i<res.size();i++)
        {
            if(res[i]%n==0)
            {
                cout << s[i] << endl;
                break;
            }
        }
        
    }
    
    return 0;
}