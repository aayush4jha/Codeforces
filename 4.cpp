#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    const int a = 1e6;
    vector<int> b(a + 1, 0), c(a + 1, 0);
    vector<bool> d(a + 1, true);
    for (int e = 1; e <= a; e++)
        for (int f = e; f <= a; f += e)
            b[f]++;

    d[0] = d[1] = false;
    for (int e = 2; e * e <= a; e++)
        if (d[e])
            for (int f = e * e; f <= a; f += e)
                d[f] = false;

    for (int e = 1; e <= a; e++)
        c[e] = c[e - 1] + d[b[e]];

    int e, f, g;
    cin >> e;
    while (e--) {
        cin >> f >> g;
        cout << c[g] - c[f - 1] << "\n";
    }

    return 0;
}
