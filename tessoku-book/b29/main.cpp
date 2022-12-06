#include <iostream>

using namespace std;

long long a, b, sum = 1;

int main()
{
    cin >> a >> b;

    do {
        sum = (sum * ((b & 1) ? a : 1)) % 1'000'000'007;
        a = (a * a) % 1'000'000'007;
        b >>= 1;
    } while (b > 0);

    cout << sum << endl;
    return 0;
}
