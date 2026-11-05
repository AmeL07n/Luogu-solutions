#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double t;
    int n;
    cin >> t >> n;
    double drink = t / n;
    int cup = n * 2;
    cout << fixed << setprecision(3) << drink << endl;
    cout << cup << endl;
    return 0;
}

