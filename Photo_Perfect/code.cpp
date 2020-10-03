#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int l, n, h[10000], w[10000];
    cin >> l;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> h[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ((w[i] < l) || (h[i] < l))
            cout << "UPLOAD ANOTHER";
        else if (w[i] == h[i])
            cout << "ACCEPTED";
        else
            cout << "CROP IT";
        cout << "\n";
    }
    return 0;
}