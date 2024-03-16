#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char ar[100];

        int N;
        cin >> N;
        for (int i = 0; i<N; i++)
        {
            cin >> ar[i];
        }
        int start=N;

        for (int i = 0; i < N-1;i++)
        {
            if(ar[i]=='*' and ar[i+1]=='*')
            {
                start = i;
                break;
            }
        }
        int cnt = 0; 

        for (int i = 0; i < start;i ++)
        {
            if(ar[i] == '@')
            {
                cnt++;
            }

        }
        cout << cnt << endl;
    }

    return 0;
}