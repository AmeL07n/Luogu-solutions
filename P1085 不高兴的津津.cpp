#include <iostream>
using namespace std;
int main() {
    int schoolh[7], momh[7];
    int maxTotal = 0;
    int maxDay = 0;
    for (int i = 0; i < 7; i++) {
        cin >> schoolh[i] >> momh[i];
        int total = schoolh[i] + momh[i];
        if (total > maxTotal) {
            maxTotal = total;
            maxDay = i + 1;
        }
    }
    if (maxTotal <= 8) {
        cout << 0 << endl;
    } else {
        cout << maxDay << endl;
    }
    return 0;
}
