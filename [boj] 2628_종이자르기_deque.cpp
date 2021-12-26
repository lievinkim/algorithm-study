#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main(void) {
    
    int x, y, n;
    cin >> x >> y >> n;
    
    deque<int> deque_x;
    deque<int> deque_y;
    deque_x.push_back(x);
    deque_y.push_back(y);

    for (int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;

        if (a==1) {
            deque_x.push_back(b);
        } else {
            deque_y.push_back(b);
        }
    }

    sort(deque_x.begin(), deque_x.end());
    sort(deque_y.begin(), deque_y.end());

    int max_x_length = 0;
    int tmp_x = 0;
    for (int i=0; i<deque_x.size(); i++) {
        int tmp_length = deque_x[i]-tmp_x;
        if (tmp_length > max_x_length) {
            max_x_length = tmp_length;
        }
        tmp_x = deque_x[i];
    }

    int max_y_length = 0;
    int tmp_y = 0;
    for (int i=0; i<deque_y.size(); i++) {
        int tmp_length = deque_y[i]-tmp_y;
        if (tmp_length > max_y_length) {
            max_y_length = tmp_length;
        }
        tmp_y = deque_y[i];
    }

    cout << max_x_length*max_y_length << '\n';
    return 0;
}