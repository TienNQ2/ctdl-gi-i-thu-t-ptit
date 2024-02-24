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
        vector<int> y(n);
        for (int i=0;i<n;i++)
        {
            cin >> x[i];
        }
        for (int i=0;i<n;i++)
        {
            cin >> y[i];
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end(),greater<int>());
        for(int i=0;i<n;i++)
        {
            sum +=x[i]*y[i];
        }
        cout << sum << endl;
    }

    return 0;
}
