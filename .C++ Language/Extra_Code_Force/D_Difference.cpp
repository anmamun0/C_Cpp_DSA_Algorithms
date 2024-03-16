#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int array[4];
    for (int i = 0; i < 4;i++)
    {
        cin>> array[i];
    }
    long long int fast = array[0] * array[1];
    long long int second = array[2] * array[3];

    cout <<"Difference = "<< fast - second<<endl;

    return 0;
}