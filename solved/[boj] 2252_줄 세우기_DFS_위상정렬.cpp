#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define MAX 32001

int N, M;
int inDegree[MAX];
vector<int> graph[MAX];

void bfs(void)
{
    queue<int> q;
    for(int i=1; i<=N; i++) {
        if(!inDegree[i]) {
            q.push(i);
        }
    }

    while(!q.empty()) {
        int cur = q.front();
        q.pop();

        cout << cur << " ";
        for(int i=0; i<graph[cur].size(); i++) {
            inDegree[graph[cur][i]]--;
            if(!inDegree[graph[cur][i]]) {
                q.push(graph[cur][i]);
            }
        }
    }
}

int main(void) {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> M;

    for (int i=0; i<M; i++) {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b); //a보다 작은 학생 b를 삽입 a -> b
        inDegree[b]++; //b의 진입 차수 증가
    }

    bfs();
    return 0;
}