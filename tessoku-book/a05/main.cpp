#include <iostream>

using namespace std;

int main()
{
    int N, K, cnt = 0;
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            int ij = i + j;
            if (ij < K && K - ij <= N) cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
