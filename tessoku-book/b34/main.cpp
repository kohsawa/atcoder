#include <iostream>

using namespace std;

int N, X, Y, grundy[5] = { 0, 0, 1, 1, 2 };
long long A;

int main()
{
    int xor_sum = 0;

    cin >> N >> X >> Y;
    for (int i = 1; i <= N; i++) {
        cin >> A;
        xor_sum ^= grundy[A % 5];
    }

    cout << ((xor_sum == 0) ? "Second" : "First") << endl;
    return 0;
}
