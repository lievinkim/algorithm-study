#include <iostream>

using namespace std;

int main(void) {
    
    int n;
    cin >> n;
    
    int *arr = new int[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    for (int i=0; i<n-1; i++) {
        for (int j=i; j<n; j++) {
            if (arr[i] > arr[j]) {
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
    
    for (int i=0; i<n; i++) {
        cout << arr[i];
    }
    
    return 0;
}