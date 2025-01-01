#include<bits/stdc++.h>
using namespace std;

string convert2Binary(int n)
{
    string s = "";
    while (n > 0)
    {
        int rem = n % 2;
        s += to_string(rem);
        n = n / 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

int convert2Decimal(string s)
{
    int ans = 0;
    int p = 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            ans += p;
        }
        p = p * 2;
    }
    return ans;
}

int main()
{
    int res = convert2Decimal("1010");
    cout << res << " ";
    return 0;
}