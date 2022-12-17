#include <iostream>

using namespace std;

int N, Q, A[200000];
bool rev = false;

int main()
{
    cin >> N >> Q;
    for (int i = 0; i < N; i++) A[i] = i + 1;

    for (int i = 0; i < Q; i++) {
        int c, x, y;
        cin >> c;
        if (c == 1) {
            cin >> x >> y;
            A[(rev) ? N - x : x - 1] = y;
        } else if (c == 3) {
            cin >> x;
            cout << A[(rev) ? N - x : x - 1] << endl;
        } else rev = !rev;
    }
}
