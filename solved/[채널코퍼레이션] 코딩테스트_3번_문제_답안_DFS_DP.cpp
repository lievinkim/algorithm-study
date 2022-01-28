

#include <iostream>
#include <vector>

using namespace std;

int h, w;
int answer = 1;
vector< vector<int> > dp;
vector< vector<int> > input_arr;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

void dfs(int x, int y, int len) {

    if (dp[x][y] > len) {
        return;
    }

    dp[x][y] = len;
    if (len > answer) {
        answer = len;
    }

    for (int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx>=0 && nx<h && ny>=0 && ny<w && input_arr[nx][ny]>input_arr[x][y]) {
            dfs(nx, ny, len+1);
        }
    }

}

int main(void) {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> h >> w;

    vector<int> tmp;
    for (int j=0; j<w; j++) {
        tmp.push_back(0);
    }
    for (int i=0; i<h; i++) {
        dp.push_back(tmp);
    }
    
    for (int i=0; i<h; i++) {
        vector<int> tmp2;
        for (int j=0; j<w; j++) {
            int tmp2_num;
            cin >> tmp2_num;
            tmp2.push_back(tmp2_num);
        }
        input_arr.push_back(tmp2);
    }

    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            dfs(i, j, 1);
        }
    }

    cout << answer << '\n';

    return 0;
}