#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v, sortest;
        for (int i = 0; i <n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
            sortest.push_back(a);
        }
        sort(sortest.begin(), sortest.end(),greater<int>());

        for (int i = 0; i <n; i++)
        {
            if(v[i] == sortest[0])
            {
                cout << v[i] - sortest[1] << " ";
            }
            else
            {
                cout << v[i] - sortest[0]<<" ";
            }
        }
        cout << endl;
    }

    return 0;
}