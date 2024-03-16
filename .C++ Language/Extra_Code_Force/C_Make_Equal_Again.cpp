#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        bool same = true;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[0] != a[i])
                same = false;
        }

        if (same)
        {
            cout << 0 << '\n';
        }
        else
        {
            int F = a[0], L = a[n - 1], cnt1 = 0, cnt2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == F)
                    cnt1++;

                else
                    break;
            }

            for (int i = n - 1; i >= 0; i--)
            {
                if (a[i] == L)
                    cnt2++;

                else
                    break;
            }

            if (F == L)
                cout << (n - (cnt1 + cnt2)) << '\n';

            else
                cout << (n - max(cnt1, cnt2)) << '\n';
        }
    }
    return 0;
}