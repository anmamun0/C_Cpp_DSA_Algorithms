#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{

	if (n<10)
    {
        return n*(n+1)/2;
    }
	int d = log10(n);
	int *a = new int[d+1];
	a[0] = 0, a[1] = 45;
	for (int i=2; i<=d; i++)
		a[i] = a[i-1]*10 + 45*ceil(pow(10,i-1));


	int p = ceil(pow(10, d));

	int result = n/p;

	return result*a[d] + (result*(result-1)/2)*p +
		result*(1+n%p) + sum(n%p);
}

int main()
{
	int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        cout << sum(n)<<endl;
    }
	
	return 0;
}