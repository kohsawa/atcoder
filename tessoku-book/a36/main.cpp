#include <iostream>

using namespace std;

int N, K;

int main()
{
    cin >> N >> K;

    cout << ((K >= 2 * (N - 1) && (K & 1) == 0) ? "Yes" : "No") << endl;
    return 0;
}
