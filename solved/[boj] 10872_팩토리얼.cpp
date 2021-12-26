#include <iostream>

using namespace std;

int calcFactorial(int n) {
    if (n <= 1 ) return 1;
    return n * calcFactorial(n-1);
}

int main(void) {
    
    int n;
    cin >> n;
    
    int answer = calcFactorial(n);
    cout << answer << '\n';
    
    return 0;
}