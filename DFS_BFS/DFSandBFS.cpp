#include <iostream>
#include <queue>
#include <vector>
#include <algorithm> // 추가

using namespace std;

bool visit[1001];
vector<int> arr[1001];

void dfs(int V) {
    if (visit[V]) return;
    visit[V] = true;
    cout << V << " ";
    for (int i = 0; i < arr[V].size(); i++) {
        int y = arr[V][i];
        dfs(y);
    }
}

void bfs(int V) {
    queue<int> q;
    q.push(V);
    visit[V] = true;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        cout << x << " ";
        for (int i = 0; i < arr[x].size(); i++) {
            int y = arr[x][i];
            if (!visit[y]) {
                q.push(y);
                visit[y] = true;
            }
        }
    }
}

int main() {
    int N, M, V;
    cin >> N >> M >> V;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    
    for (int i = 1; i <= N; i++) {
        sort(arr[i].begin(), arr[i].end());
    }

    dfs(V);

    
    fill(visit, visit + N + 1, false);

    cout << endl;

    bfs(V);

    return 0;
}
