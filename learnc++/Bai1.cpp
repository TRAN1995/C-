#include <iostream>
#include <string>

using namespace std;

int main()
{
    // freopen("Bai1.inp", "r", stdin);
    // freopen("Bai1.out", "w", stdout);
    string st;
    cin >> st;

    int n = st.length() - 1;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j <= n; j++)
            if(st[i] < st[j])
                swap(st[i], st[j]);
            

    cout << st;
}