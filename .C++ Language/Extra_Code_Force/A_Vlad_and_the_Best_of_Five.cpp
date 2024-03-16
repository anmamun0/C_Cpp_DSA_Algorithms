#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int A = 0;
        int B = 0; 
        for (int i = 0; i < 5; i++)
        {
            if(s[i]=='A')
                A++;
            else if(s[i]=='B')
                B++;
        }

        if(A>B)
            cout << 'A' << endl;
        else if(B>A)
            cout << 'B' << endl;
        else
            cout << s[0] << endl;
    }

    return 0;
}