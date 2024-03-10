/*biểu diễn số 1*/
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> bieudienso(vector<int> a) {
    vector<vector<int>> res;
    res.push_back(a);
    while (a.size() > 1) {
        vector<int> tmp;
        for (int i = 0; i < a.size() - 1; i++) {
            tmp.push_back(a[i] + a[i + 1]);
        }
        res.push_back(tmp);
        a = tmp;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<vector<int>> result = bieudienso(a);
        for(const auto &row : result)
        {
            cout << "[" ;
            for(int i=0;i<row.size();i++)
            {
                cout << row[i];
                if(i!=row.size()-1) cout <<" ";
            }
            cout << "]" << endl;
        }
    }
    return 0;
}
