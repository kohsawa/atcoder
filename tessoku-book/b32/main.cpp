#include <iostream>

using namespace std;

int N, K, a[100];
bool win[100001];

int main()
{
    cin >> N >> K;
    for (int i = 0; i < K; i++) cin >> a[i];

    for (int i = 0; i <= N; i++) {
        win[i] = false;
        for (int j = 0; j < K; j++) {
            if (i >= a[j] && win[i - a[j]] == false) win[i] = true;
        }
    }

    cout << ((win[N]) ? "First" : "Second") << endl;
    return 0;
}
