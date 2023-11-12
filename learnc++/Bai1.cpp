#include <iostream>
#include <string>

using namespace std;

int main()
{
    // freopen("Bai1.inp", "r", stdin);
    // freopen("Bai1.out", "w", stdout);
    string s;
    cin >> s;

    int n = s.length() - 1;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j <= n; j++)
            if(s[i] < s[j])
                swap(s[i], s[j]);
            

    cout << s;
}