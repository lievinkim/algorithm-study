#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void calcHanoi(int n, int from, int tmp, int to) {

    if (n == 1) {
        cout << from << " " << to << "\n";
    } else {
        calcHanoi(n-1, from, to, tmp);
        cout << from << " " << to << "\n";
        calcHanoi(n-1, tmp, from, to);
    }

} 

int main(void) {
    
    int n;
    cin >> n;

    string answer = to_string(pow(2, n));
    int idx = answer.find('.');
    answer = answer.substr(0, idx);
    answer[answer.length()-1] -= 1;
    cout << answer << '\n';

    if (n <= 20) {
        calcHanoi(n, 1, 2, 3);
    }

    return 0;
}