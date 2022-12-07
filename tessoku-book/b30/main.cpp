#include <iostream>

using namespace std;

int H, W, M = 1'000'000'007;

long long pow(long long a, long long b, int d)
{
    long long sum = 1;
    do {
        sum = (sum * ((b & 1) ? a : 1)) % d;
        a = (a * a) % d;
        b >>= 1;
    } while (b > 0);

    return sum;
}

/* answer = (H + W - 2)C(W - 1) = (H + W - 2)! / ((W - 1)! * (H - 1)!)*/
int main()
{
    long long fa = 1, fb = 1;
    cin >> H >> W;

    for (int i = H + W - 2; i >= 1; i--) fa = (fa * i) % M;
    for (int i = H - 1; i >= 1; i--) fb = (fb * i) % M;
    for (int i = W - 1; i >= 1; i--) fb = (fb * i) % M;

    cout << (fa * pow(fb, M - 2, M)) % M << endl;
    return 0;
}
