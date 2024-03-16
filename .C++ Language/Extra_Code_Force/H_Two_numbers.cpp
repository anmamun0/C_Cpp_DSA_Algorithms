#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;

    double floorr = A / B;
    cout << "floor " << A << " / " << B << " = " << floor(floorr) << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil(floorr) << endl;
    cout << "round " << A << " / " << B << " = " << round(floorr) << endl;

    return 0;
}