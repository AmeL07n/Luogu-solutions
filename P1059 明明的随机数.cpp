#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    bool seen[1001] = {false};
    int count = 0;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if (!seen[num]) {
            seen[num] = true;
            count++;
        }
    }
    cout << count << endl;
    for (int i = 1; i <= 1000; i++) {
        if (seen[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
