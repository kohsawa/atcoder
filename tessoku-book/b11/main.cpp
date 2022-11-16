#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, Q, A[100000], X;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A, A + N);

    cin >> Q;

    for (int i = 1; i <= Q; i++) {
        cin >> X;
        int pos = lower_bound(A, A + N, X) - A;

        cout << pos << endl;
    }

    return 0;
}
