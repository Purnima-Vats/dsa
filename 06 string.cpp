#include<iostream>
using namespace std;

int main()
{
    string s = "hello";
    int len = s.size();

    // cout << "size of string is " << len;
    // cout << s[len - 1];
    s[0] = 'm';
    cout << s;
    return 0;
}