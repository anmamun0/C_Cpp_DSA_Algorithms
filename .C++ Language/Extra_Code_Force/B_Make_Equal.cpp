#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll T;
    cin >> T;
    while(T--)
    {
        ll N;
        cin >> N;
        vector<ll> water;
        for (ll i = 0; i < N;i++)
        {
            ll a;
            cin >> a;
            water.push_back(a);
        }
 
        ll avg = accumulate(water.begin(), water.end(),1)/N;

        int carry = 0;

        for (ll i = 0; i < N; i++)
        {
            if(water[i] > avg)
            {
                int extra = avg - water[i];
                carry += extra;
                water[i] = avg;
            }
            else
            {
                
            }

        }
        set<ll> drank(water.begin(), water.end());
 
        if(drank.size() == 1)
        {
            cout << "YES" << endl;
            
        }
        else{
            cout << "NO" << endl;
        }
    }
 
    return 0;
}