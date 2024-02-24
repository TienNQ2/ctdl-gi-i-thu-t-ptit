#include <iostream>
#include <algorithm>
#include <string>
#include<math.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
       int n;
       int temp=0;
       int x,y;
       string res = "";
       cin >> n;
        for(int i=0;i*4<=n;i++)
        {
             x = (n-4*i)/7;
            if(4*i+x*7==n)
            {
                temp=1;
                y=i;
                break;
            }
        }
        if(temp==0)
        {
            cout << "-1" << endl;
        }
        else
        {
            for(int i =1 ; i<=y;i++)
            {
                res+="4";
            }
            for(int i=1;i<=x;i++)
            {
                res+="7";
            }
            cout << res << endl;
        }
    }

    return 0;
}
