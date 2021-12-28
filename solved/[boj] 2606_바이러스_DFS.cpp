#include <iostream>

using namespace std;

int map[101][101];
int visited[101];
int n, connected;
int ans = 0;

void dfs(int start) {
    visited[start] = true;

    for (int i=1; i<=n; i++) {
        if (map[start][i]==1 && visited[i]==0) {
            ans++;
            dfs(i);
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    cin >> connected;

    int a, b;
    for (int i=0; i<connected; i++) {
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }

    dfs(1);
    cout << ans << '\n';

    return 0 ;
}