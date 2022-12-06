#include <iostream>
#include <cmath>

using namespace std;

int N, del[1000001] = { 0 };

int main()
{
    cin >> N;

    for (int i = 2; i * i <= N + 1; i++) {
        if (del[i] != 0) continue;

        for (int j = i << 1; j <= N; j += i) del[j] = 1;
    }

    for (int i = 2; i <= N; i++) if (del[i] == 0) cout << i << endl;

    return 0;
}
