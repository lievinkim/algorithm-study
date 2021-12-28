#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool binarySearch(int len, int sorted[], int num) {

    int left = 0;
    int right = len;

    while (left<=right) {
        int mid = (left+right)/2;

        if (sorted[mid] == num) {
            cout << 1 << "\n";
            return true;
        } else if (sorted[mid] > num) {
            right = mid-1;
        } else {
            left = mid+1;
        }
    }

    cout << 0 << "\n";
    return false;
}

int main(void) {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i=0; i<N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+N);


    int M;
    cin >> M;
    
    int chk_num;
    for (int i=0; i<M; i++) {
        cin >> chk_num;
        binarySearch(N, arr, chk_num);
    }
    
    return 0;
}