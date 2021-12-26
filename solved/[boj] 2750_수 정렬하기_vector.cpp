#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {

    int n;
    cin >> n;

    int tmp;
    vector<int> v;
    for (int i=0; i<n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    vector<int>::iterator iter;
    for (iter=v.begin(); iter!=v.end(); iter++) {
        cout << *iter << '\n';
    }

    // for (int i=0; i<n; i++) {
    //     cout << v[i] << '\n';
    // }

    return 0;
}