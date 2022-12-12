#include <iostream>

using namespace std;

int N, K;
string S;

int main()
{
    cin >> N >> K >> S;

    int sum = 0;
    for (int i = 0; i < N; i++) if (S[i] == '1') sum++;

    cout << (((K - sum) & 1) ? "No" : "Yes") << endl;
    return 0;
}
