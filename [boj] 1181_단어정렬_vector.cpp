#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

bool compareWith(string a, string b) {
    if(a.length() == b.length()) {
        return a<b;
    }
    return a.length() < b.length();
}


int main(void) {

    int N;
    cin >> N;

    set<string> s;
    string str;
    for (int i=0; i<N; i++) {
        cin >> str;
        s.insert(str);
    }

    vector<string> v;
    set<string>::iterator iter_s;
    for(iter_s=s.begin(); iter_s!=s.end(); iter_s++) {
        v.push_back(*iter_s);
    }

    sort(v.begin(), v.end(), compareWith);

    vector<string>::iterator iter_v;
    for(iter_v=v.begin(); iter_v!=v.end(); iter_v++) {
        cout << *iter_v << '\n';
    }

    return 0;
}