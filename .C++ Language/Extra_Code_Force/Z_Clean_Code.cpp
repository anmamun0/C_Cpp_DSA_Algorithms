#include <bits/stdc++.h>
using namespace std;
void remove_comamt(string name)
{
    int count = 0;
    string mname;
    stringstream ss(name);
    string word;

    int fastword = 1;
    while (ss >> word)
    {
        
        if (word == "//")
        {
            break;
        }
        // if (fastword)
        // {
        //     fastword = 0;
        // }
        // else
        // {
            
        // }

        mname.append(word);
        mname.append(" ");
        
    }

    if (mname != "")
    {
        cout << mname << endl;
    }
}
int main()
{
    string name;

    bool d = false;
    while (getline(cin, name))
    {   
        // I dont send in function /**/ this commant
        if(name=="/*"){
            d = true;
        }
        if(d == true && name != " */"){
            if(d== true && name == "*/"){
                d = false;
            }
            continue;
        }


        if (name != "")
        {
            remove_comamt(name);
        }

    }

    return 0;
}