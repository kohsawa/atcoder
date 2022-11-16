#include <iostream>

using namespace std;

int main()
{
    int N;
    float l = 1, r = 100, m;

    cin >> N;

    while (r - l >= 0.001) {
        m = (l + r) / 2.0;
        float n = m * m * m + m;

        if (N > n) l = m;
        else r = m;
    }
    cout << r << endl;

    return 0;
}
