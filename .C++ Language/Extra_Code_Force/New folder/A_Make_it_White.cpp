#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int size;
        cin >> size;
        cin.ignore();

        char mat[size];
        for (int i = 1; i <= size; i++)
        {
            char a;
            cin >> a;
            mat[i] = a;
        }

        int start = 0, end = 0;
        for (int i = 1; i <= size; i++)
        {
            if(mat[i]=='B')
            {
                start = i;
                break;
            }
        }

        for (int i = size ; i >=1 ; i--)
        {
            if(mat[i]=='B')
            {
                end = i;
                break;
            }
        }

        int find = 0;
        for (start; start <= end; start++)
        {
            find++;
        }
        cout << find << endl;
        
    }

    return 0;
}