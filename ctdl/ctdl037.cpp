#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
       int x[10]={1000,500,200,100,50,20,10,5,2,1};
       int n;
       int cnt=0;
       cin >> n;
       for(int i=0;i<10;i++)
       {
           cnt+=n/x[i];
           n %=x[i];
       }
       cout << cnt << endl;
    }

    return 0;
}
