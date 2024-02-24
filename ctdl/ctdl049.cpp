#include <iostream>
#include <algorithm>
#include <string>
#include<math.h>
using namespace std;

int timkiem(int key,int a[],int high,int low)
{
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(a[mid]==key)
            return mid;
        else if(a[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
       int a[1000],n,key;
       cin >> n >> key;
       for(int i = 0 ; i < n ;i++)
       {
           cin >> a[i];
       }
       int res = timkiem(key,a,n-1,0);
       if(res!=-1)
       {
           cout << res + 1 << endl;
       }
       else
        cout << "NO" << endl;
    }

    return 0;
}
