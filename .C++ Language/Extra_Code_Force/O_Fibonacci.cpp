#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int i = 0;
    int j = 1;
    while(N--){
        int sum = i + j;
        
        if(N==0)
            cout << i << endl;

        i = j;
        j = sum;
    }
    

    return 0;
}