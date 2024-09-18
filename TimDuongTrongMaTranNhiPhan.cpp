#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int n, m, x, y, z, t;
int a[1005][1005];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int visited[1005][1005];
int path[1005][1005];

void bfs(int i, int j){
	queue<pair<int,int>> q;
	q.push({i,j});
	visited[i][j] = 1;
	path[i][j] = 0;
	while(!q.empty()){
		pair<int,int> top = q.front();
		q.pop();
		for(int k = 0; k < 4; k++){
			int i1 = top.first + dx[k];
			int j1 = top.second + dy[k];
			if(i1 >= 0 && i1 <= n && j1 >= 0 && j1 <= m && a[i1][j1] == 1 && visited[i1][j1] == 0){
				q.push({i1,j1});
				visited[i1][j1] = 1;
				path[i1][j1] = path[top.first][top.second] + 1;
			}
		}
	}
}

int main(){
	int q;
	cin >> q;
	while(q--){
		memset(visited, 0, sizeof(visited));
		memset(path, 0, sizeof(path));
		cin >> n >> m >> x >> y >> z >> t;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		bfs(x,y);
		if(visited[z][t] != 1 || a[x][y] == 0 || a[z][t] == 0){
			cout << "-1" << endl;
		}
		else{
			cout << path[z][t] << endl;
		}
	}
}

//░░░░░░░░░░░░░░░░░░░░░░█████████
//░░███████░░░░░░░░░░███▒▒▒▒▒▒▒▒███
//░░█▒▒▒▒▒▒█░░░░░░░███▒▒▒▒▒▒▒▒▒▒▒▒▒███
//░░░█▒▒▒▒▒▒█░░░░██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░░░░█▒▒▒▒▒█░░░██▒▒▒▒▒██▒▒▒▒▒▒██▒▒▒▒▒███
//░░░░░█▒▒▒█░░░█▒▒▒▒▒▒████▒▒▒▒████▒▒▒▒▒▒██
//░░░█████████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░░░█▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒██
//░██▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒██▒▒▒▒▒▒▒▒▒▒██▒▒▒▒██
//██▒▒▒███████████▒▒▒▒▒██▒▒▒▒▒▒▒▒██▒▒▒▒▒██
//█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒████████▒▒▒▒▒▒▒██
//██▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░█▒▒▒███████████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██
//░██▒▒▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█
//░░████████████░░░█████████████████