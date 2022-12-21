#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int Q, q, x;
priority_queue<int, vector<int>, greater<int>> T;

int main()
{
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        cin >> q;

        if (q == 1) {
            cin >> x;
            T.push(x);
        } else if (q == 2) cout << T.top() << endl;
        else T.pop();
    }
    return 0;
}
