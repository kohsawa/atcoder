#include <iostream>

using namespace std;

int N, gt[3000], lt[3000];
string S;

int main()
{
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        gt[i] = 1;
        lt[i] = 1;
    }

    for (int i = 0; i < S.length(); i++) if (S[i] == 'A') gt[i + 1] = gt[i] + 1;
    for (int i = S.length() - 1; i >= 0; i--) if (S[i] == 'B') lt[i] = lt[i + 1] + 1;

    int sum = 0;
    for (int i = 0; i < N; i++) sum += max(gt[i], lt[i]);
    cout << sum << endl;
    return 0;
}
