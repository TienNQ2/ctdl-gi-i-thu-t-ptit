#include <iostream>
#include <algorithm>
#include <string>
#include<math.h>
using namespace std;

int chuyendoi3 (int n)
{
    int bd=0;
    int sm=0;
    while(n>0)
    {
        if(n%10==3) sm += 5*pow(10,bd);
        else sm =sm + (n%10)*pow(10,bd);
        n/=10;
        bd++;
    }
    return sm;
}
int chuyendoi5 (int n)
{
    int bd=0;
    int sm=0;
    while(n>0)
    {
        if(n%10==5) sm += 3*pow(10,bd);
        else sm = sm + (n%10)*pow(10,bd);
        n/=10;
        bd++;
    }
    return sm;
}
int tongmax(int m,int n)
{
    return chuyendoi3(m)+chuyendoi3(n);
}
int tongmin(int m,int n)
{
    return chuyendoi5(m)+chuyendoi5(n);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
       int m,n;
       cin >> m >> n;
       cout << tongmin(m,n)<<" "<<tongmax(m,n)<<endl;
    }

    return 0;
}
