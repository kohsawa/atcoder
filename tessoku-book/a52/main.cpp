#include <iostream>
#include <queue>

using namespace std;

int Q, q;
string x;
queue<string> T;

int main()
{
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        cin >> q;
        if (q == 1) {
            cin >> x;
            T.push(x);
        } else if (q == 2) cout << T.front() << endl;
        else T.pop();
    }
    return 0;
}
