#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // s ÊÇ "123.4"
    // s[0]='1',s[1]='2',s[2]='3',s[3]='.',s[4]='4'
    cout << s[4] << "." << s[2] << s[1] << s[0] << endl;
    return 0;
}

