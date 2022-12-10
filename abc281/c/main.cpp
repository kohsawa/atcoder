#include <iostream>
#include <algorithm>

using namespace std;

int N, A[100001] = { 0 };
long long T, S[100001] = { 0 };

int main()
{
    cin >> N >> T;
    for (int i = 1; i <= N; i++) cin >> A[i];

    for (int i = 1; i <= N; i++) S[i] = S[i - 1] + A[i];

    long long t = T % S[N];
    int pos = lower_bound(S + 1, S + N, t) - S;
    cout << pos << " " << t - S[pos - 1] << endl;
    return 0;
}
