#include <iostream>
#include <queue>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int **map = new int*[N+1];
    for (int i=0; i<N+1; i++) {
        map[i] = new int[N+1];
    }

    int E;
    cin >> E;

    for(int i=0; i<E; i++) {
        int a, b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }
    
    bool *visited = new bool[N];
    for (int i=0; i<N; i++) {
        visited[i] = 0;
    }

    int start = 1;
    int counter = 0;
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()) {
        start = q.front();
        q.pop();

        for (int i=1; i<=N; i++) {
            if (map[start][i] == 1 && visited[i] == 0) {
                q.push(i);
                visited[i] = true;
                counter += 1;
            }
        }
    }

    cout << counter << '\n';

    return 0 ;
}