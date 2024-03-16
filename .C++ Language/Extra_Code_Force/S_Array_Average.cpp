#include <bits/stdc++.h>
using namespace std;

double sum(vector<int>v, int N){
    if (N == -1)
        return 0.0;
    return sum(v, N - 1) + v[N];
}
int main()
{

    int N;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    double val = sum(v, N - 1) / N;

    cout << val << endl;
    
}