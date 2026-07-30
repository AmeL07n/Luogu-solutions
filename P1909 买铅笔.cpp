#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int minCost = 2e9;
    for (int i = 0; i < 3; i++) {
        int num, price;
        cin >> num >> price;
        int bags = (n + num - 1) / num;
        int cost = bags * price;
        if (cost < minCost) {
            minCost = cost;
        }
    }
    cout << minCost << endl;
    return 0;
}
