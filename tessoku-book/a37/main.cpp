#include <iostream>

using namespace std;

long long N, M, B;
long long A = 0, C = 0, sum;

int main()
{
    int i, tmp;
    cin >> N >> M >> B;
    for (i = 1; i <= N; i++) { cin >> tmp; A += tmp; }
    for (i = 1; i <= M; i++) { cin >> tmp; C += tmp; }

    sum = B * N * M + A * M + C * N;
    printf("%lld\n", sum);
    return 0;
}
