#include <bits/stdc++.h>
using namespace std;
int main()
{
    string hello;
    cin >> hello;
    bool flag = true;
    for(char c:hello){
        if(c!='h' ||c!='e' ||c!='l'  ||c!='o'){
            flag = false;
            break;
        }
    }
    (flag) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}