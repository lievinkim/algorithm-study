#include <iostream>

using namespace std;

long long fibo_arr[100] = {0, 1, };
long long fibo_fun(int num) {
    if (num==0 || num==1) {
        return fibo_arr[num];
    } else if (fibo_arr[num] == 0) {
        fibo_arr[num] = fibo_fun(num-1) + fibo_fun(num-2);
    }

    return fibo_arr[num];
}

int main(void) {

    int n;
    cin >> n;

    cout << fibo_fun(n);

    return 0;
}