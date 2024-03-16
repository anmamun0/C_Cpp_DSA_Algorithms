#include <bits/stdc++.h>
using namespace std;
int mat[100][100];
bool visit[100][100];
vector<pair<int, int>> d1 = {{-1, -1}, {1, 1}};
vector<pair<int, int>> d2 = {{-1, 1}, {1, -1}};

vector<pair<int, int>> d11 = {{-2, -2}, {2, 2}};
vector<pair<int, int>> d2 = {{-2, 2}, {2, -2}};


void BFS(int si,int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visit[si][sj] = true;
    while(!q.empty())
    {
        pair<int, int> pa = q.front();
        q.pop();
        int a = pa.first;
        int b = pa.second;

        for (int i = 0; i < 2; i++)
        {
            int o = a - 1,;

        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                cin >> mat[i][j];
            }
        }
    }

    return 0;
}