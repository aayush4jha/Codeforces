#include <bits/stdc++.h>
using namespace std;

int main() {
    auto a = [](long long b) 
    {
        if (b < 2) return false;
        if (b % 2 == 0 && b != 2) return false;
        for (long long c = 3; c * c <= b; c += 2)
            if (b % c == 0) return false;
        return true;
    };

    auto d = [](long long b) {
        int c = 0;
        for (long long e = 1; e * e <= b; e++) {
            if (b % e == 0) {
                c++;
                if (e != b / e) c++;
            }
        }
        return c;
    };

    auto e = [&](long long b, long long f) {
        int g = 0;
        for (long long h = b; h <= f; h++) {
            if (!a(h) && a(d(h))) g++;
        }
        return g;
    };

    int b;
    cin >> b;
    while (b--) {
        long long f, g;
        cin >> f >> g;
        cout << e(f, g) << "\n";
    }

    return 0;
}
