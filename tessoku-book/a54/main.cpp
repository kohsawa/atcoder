#include <iostream>
#include <map>

using namespace std;

int Q, q, y;
string x;
map<string, int>S;

int main()
{
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> q >> x;

        if (q == 1) {
            cin >> y;
            S[x] = y;
        } else cout << S[x] << endl;
    }
    return 0;
}
