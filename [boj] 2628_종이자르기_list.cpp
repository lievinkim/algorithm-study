#include <iostream>
#include <list>

using namespace std;

int main(void) {
    
    int x, y, n;
    cin >> x >> y >> n;
    
    list<int> list_x;
    list<int> list_y;

    for (int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;

        if (a==1) {
            list_x.push_back(b);
        } else {
            list_y.push_back(b);
        }
    }

    list_x.sort();
    list_y.sort();

    int max_x_length = 0;
    int tmp_x = 0;
    int max_y_length = 0;
    int tmp_y = 0;

    list<int>::iterator iter;

    for(iter=list_x.begin(); iter!=list_x.end(); iter++) {
        int tmp_length = *iter-tmp_x;
        if (tmp_length > max_x_length) {
            max_x_length = tmp_length;
        }
        tmp_x = *iter;
    }

    if (x-tmp_x > max_x_length) {
        max_x_length = x-tmp_x;
    }

    for(iter=list_y.begin(); iter!=list_y.end(); iter++) {
        int tmp_length = *iter-tmp_y;
        if (tmp_length > max_y_length) {
            max_y_length = tmp_length;
        }
        tmp_y = *iter;
    }

    if (y-tmp_y > max_y_length) {
        max_y_length = y-tmp_y;
    }

    cout << max_x_length*max_y_length << '\n';
    return 0;
}