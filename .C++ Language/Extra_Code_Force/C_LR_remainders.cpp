#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll N, d;
        cin >> N >> d;
        vector<ll> ar;
        ll fast = 1;
        for (ll i = 0; i < N;i++)
        {
            ll a;
            cin >> a;
            ar.push_back(a);
            fast *= a;
        }
        string s;
        cin >> s;

        vector<ll> ans;
        ans.push_back(fast % d);

        for (ll i = 0; i < s.size(); i++)
        {
            if(s[i] == 'R')
            {
                if(!ar.empty())
                {
                    ar.pop_back();
                    ll sum = 1;
                    for(ll c:ar)
                    {
                        sum *= c;
                    }
                    ans.push_back(sum%d);
        
                }
            }
            else if(s[i] == 'L')
            {
                if(!ar.empty())
                {
                    reverse(ar.begin(), ar.end());
                    ar.pop_back();
                    ll sum = 1;
                    for(ll c:ar)
                    {
                        sum *= c;
                    }
                    ans.push_back(sum % d);
                    reverse(ar.begin(), ar.end());
                }
            }
        }
        if(!ans.empty())
        {
            ans.pop_back();

        }


        for(auto c:ans)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}