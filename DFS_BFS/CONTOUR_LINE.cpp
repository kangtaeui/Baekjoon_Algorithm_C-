#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;



typedef struct queue_node {
	int x, y;
	int height;
	queue_node(int x, int y, int height) { this->x = x; this->y = y; this->height = height; }
};


int main()
{
	int N, X, Y;
	cin >> N >> X >> Y;
	X--; Y--;

	vector <vector <int>> map(N, vector <int>(N, 0));

	queue <queue_node> q;
	q.push(queue_node(X, Y, 1));

	int tx, ty, th;


	while (!q.empty())
	{
		tx = q.front().x;
		ty = q.front().y;
		th = q.front().height;
		q.pop();

		if (map[tx][ty])
		{
			continue;
		}

		map[tx][ty] = th;
		if (ty != 0)
		{
			q.push(queue_node(tx, ty - 1, th + 1));
		}

		if (ty < N-1)
		{
			q.push(queue_node(tx, ty + 1, th + 1));
		}
		if (tx < N-1)
		{
			q.push(queue_node(tx + 1, ty, th + 1));
		}
	
		if (tx != 0)
		{
			q.push(queue_node(tx - 1, ty, th + 1));
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
		{
			cout << map[i][j] << "\t";
		}
		cout << '\n';
	}


}
