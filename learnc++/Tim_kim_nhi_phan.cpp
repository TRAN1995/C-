#include <bits/stdc++.h>
using namespace std;

int first_pos(int a[], int n, int x)
{
    int l = 0;
    int r = n - 1;
    int res = -1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == x)
        {
            r = m - 1;
            res = m;
        }
        else if(x < a[m]) r = m - 1;
        else l = m + 1;
    }
    return res;

}


int end_pos(int a[], int n, int x)
{
    int l = 0;
    int r = n - 1;
    int res = -1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == x)
        {
            l = m + 1;
            res = m;
        }
        else if(x < a[m]) r = m - 1;
        else l = m + 1;
    }
    return res;

}


int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int l = first_pos(a, n, x);
    int r = end_pos(a, n, x);
    if(l != -1) cout << l << "  " << r << "  "<< r - l + 1 << endl;
    else cout << "Not Found\n";
    
    
    return 0;
}