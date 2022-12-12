#include <iostream>

using namespace std;

int N, A;
long long R[101] = { 0 }, sum = 0;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A;
        R[A % 100] += 1;
    }

    for (int i = 1; i < 50; i++) sum += R[i] * R[100 - i];
    sum += (R[0] * (R[0] - 1) + R[50] * (R[50] - 1)) / 2;

    cout << sum << endl;
    return 0;
}
