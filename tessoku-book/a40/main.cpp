#include <iostream>

using namespace std;

int N, A;
long long C[101], sum = 0;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A;
        C[A] += 1;
    }

    for (int i = 1; i <= 100; i++) {
        if (C[i] < 3) continue;
        sum += (C[i] * (C[i] - 1) * (C[i] - 2)) / 6;
    }

    cout << sum << endl;
    return 0;
}
