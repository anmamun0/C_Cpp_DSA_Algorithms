#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        char mat[5][5];

        int x, y;

        for (int i = 0; i < 3;i++)
        {
            for (int j = 0; j<3; j++)
            {
                char c;
                cin >> c;
                mat[i][j] = c;
                if(c =='?'){
                    x = i, y = j;
                }

            }
        }

        bool A = false;
        bool B = false;
        bool C = false;
        for (int i = 0; i < 3;i++)
        {
            if (mat[x][i]=='A')
                A = true;
            else if(mat[x][i] == 'B')
                B = true;
            else if(mat[x][i] == 'C')
                C = true;
        }


        if(!A)
            cout << 'A' << endl;
        else if(!B)
            cout << 'B' << endl;
        else if(!C)
            cout << 'C' << endl;
    }

    return 0;
}