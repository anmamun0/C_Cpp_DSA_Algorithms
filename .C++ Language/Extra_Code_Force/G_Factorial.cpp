#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int N;
    cin >> N;

    while (N--)
    {
        long long int sum = 1;
        long long int  x;
        cin >> x;
        for (long long int i = 1; i <=x; i++)
        {
            sum *= i;
        }
        
        cout << sum << endl;
    }
    

    return 0;
}