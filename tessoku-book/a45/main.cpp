#include <iostream>

using namespace std;

int N;
char C;
string A;

int main()
{
    int sum = 0;
    cin >> N >> C >> A;

    for (int i = 0; i < N; i++) {
        sum = (sum + ((A[i] == 'B') ? 1 : (A[i] == 'R') ? 2 : 0));
    }
    cout << (("WBR"[sum % 3] == C) ? "Yes" : "No") << endl;
    return 0;
}
