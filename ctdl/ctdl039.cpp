#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int sum=0;
        cin >> n;
        vector<int> x(n);
        for (int i=0;i<n;i++)
        {
            cin >> x[i];
        }
        sort(x.begin(),x.end());
        for(int i=0;i<n;i++)
        {
            sum = (sum+x[i]*i)%mod;
        }
        cout << sum << endl;
    }

    return 0;
}
