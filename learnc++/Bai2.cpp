#include <iostream>
#include <string>
#include <cmath>

using namespace std;


struct toa_do{
    int x;
    int y;
};
int main()
{
    // freopen("Bai2.inp", "r", stdin);
    // freopen("Bai2.out", "w", stdout);
    int n;
    cin >> n;
    toa_do a[1001];

    for(int i = 1; i <= n; i++)
        cin >> a[i].x >> a[i].y;

    double max = sqrt(a[1].x * a[1].x + a[1].y*a[1].y);

    int p;
    for(int i = 1; i <= n; i++)
        if(max < sqrt(a[i].x * a[i].x + a[i].y*a[i].y))
        {
            max = sqrt(a[i].x * a[i].x + a[i].y*a[i].y);
            p = i;
        }
    
    int 
    for(int i = 1; i <= n; i++)
        if(i != p && )

}