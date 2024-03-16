#include <bits/stdc++.h>
using namespace std;
int main()
{
    string url;
    cin >> url;

    int count = 0;
    for(char c:url){
        count++;
        if(c=='?'){
            url.erase(0, count);
            count = 0;
        }
    }
    count = 0;
    string::iterator it;
     for (it = url.begin(); it < url.end(); it++){
         if(*it == '&'){
             url.replace(count,1, "\n");
         }
         if(*it == '='){
             url.replace(count, 1, ": ");
         }
        count++;
    }

    cout << url << endl;

    return 0;
}