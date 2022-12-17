#include <iostream>

using namespace std;

int N, M, W[200000] = { 0 }, A;

int main()
{
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> A;
        W[A - 1] += 1;
    }

    for (int i = 0; i < N; i++) cout << (M - W[i]) << endl;
    return 0;
}
