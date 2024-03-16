#include <bits/stdc++.h>

using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, M, K;
        cin >> N >> M >> K;

        vector<int> fast;
        vector<int> second;
        for (int i = 0; i < N;i++)
        {
            int a;
            cin >> a;
            fast.push_back(a);
        }
        for (int i = 0; i < M;i++)
        {
            int a;
            cin >> a;
            second.push_back(a);
        }

        set<int> a(fast.begin(), fast.end());
        set<int> b(second.begin(), second.end());

        int x = 0, y = 0;

        vector<bool> chack1(K, false);
        vector<bool> chack2(K, false);
        for(int c:fast)
        {
            if(c<=K)
            {
                chack1[c] = true;
                x++;
            }
            if(x==(K/2)) break;
        }

        for(int c:second)
        {
            if(c<=K and !chack1[c] and !chack2[c])
            {
                chack2[c] = true;
                y++;
            }
            if(y==(K/2)) break;

        }


        if(x>=(K/2) and y>= (K/2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // cout << x << " " << y << " "<< K/2 <<endl;
    }

    return 0;
}