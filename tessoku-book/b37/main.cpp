#include <iostream>

using namespace std;

long long N, sum = 0, i;
int s[10] = { 0 };

int main()
{
    cin >> N;

    for (i = 1; i < 10; i++) s[i] = s[i - 1] + i;

    i = 10;
    sum += 45 * (N / 10) + s[N % 10];
    while (N > i) {
        int p = (N / i) % 10;
        sum += 45 * (N / (i * 10)) * i + s[p - 1] * i + p * (N % i + 1);
        i *= 10;
    }
    cout << sum << endl;
    return 0;
}
