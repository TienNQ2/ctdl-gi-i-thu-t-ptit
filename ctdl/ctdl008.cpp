#include <iostream>
#include <algorithm>
#include <string>
#include<math.h>
using namespace std;

string chuyendoi (string s)
{
    string gray="";
    gray = s[0];
    for(int i=1;i<s.size();i++)
    {
        gray += (s[i-1]==s[i]) ? '0' : '1';
    }
    return gray;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
       string s;
       cin >> s;
       string res = chuyendoi(s);
       cout << res << endl;
    }

    return 0;
}
