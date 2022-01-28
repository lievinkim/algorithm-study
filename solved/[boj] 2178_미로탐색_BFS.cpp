#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M;
int map[100][100] = { 0 };
int cnt[100][100] = { 0 };
bool visited[100][100];

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

int bfs(int x, int y, int cnt) {
    queue< pair< pair<int, int>, int> > q;
    q.push(make_pair(make_pair(x, y), cnt));

    while(!q.empty()) {
        x = q.front().first.first;
        y = q.front().first.second;
        cnt = q.front().second;
        q.pop();

        if (x == N-1 && y == M-1) return cnt;

        for (int i=0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx<0 || nx>=N || ny<0 || ny>=M) continue;
            if(map[nx][ny] == 1 && visited[nx][ny] == false) {
                visited[nx][ny] = true;
                q.push(make_pair(make_pair(nx, ny), cnt+1));
            }
        }
    }
    
}

int main(void) {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> M;
    
    for(int i=0; i<N; i++) {
        string tmp;
        cin >> tmp;
        for(int j=0; j<M; j++) {
            map[i][j] = tmp[j]-'0';
        }
    }

    visited[0][0] = true;
    cout << bfs(0, 0, 1) << '\n';
    
    return 0;
}