#include <iostream>

using namespace std;

int N, K;
int A[100001];

bool check(int x)
{
    long long sum = 0;

    for (int i = 1; i <= N; i++) {
        sum += x / A[i];
    }

    return sum >= K;
}

int main()
{
    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    long long L = 0, R = 1'000'000'000;

    while (L < R) {
        long long M = (L + R) / 2;

        if (check(M)) R = M;
        else L = M + 1;
    }

    cout << L << endl;
    return 0;
}
