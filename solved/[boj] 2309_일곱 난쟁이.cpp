#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {

    int sum = 0;
    int arr[9];
    for (int i=0; i<9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr+9);
    int dff = sum - 100;
    for (int i=0; i<8; i++) {
        for (int j=i+1; j<9; j++) {
            if (arr[i]+arr[j] == dff) {
                for (int k=0; k<9; k++) {
                    if (k==i || k==j) {
                        continue;
                    }
                    cout << arr[k] << '\n';
                }
                return 0;
            }
        }
    }

    
}