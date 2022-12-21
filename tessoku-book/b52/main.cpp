#include <iostream>
#include <queue>

using namespace std;

int N, X;
string A;
queue<int> T;

int main()
{
    cin >> N >> X >> A;

    T.push(X);
    A[X - 1] = '@';

    while (!T.empty()) {
        int x = T.front();
        T.pop();
        if (A[x - 2] == '.') {
            A[x - 2] = '@';
            T.push(x - 1);
        }
        if (A[x] == '.') {
            A[x] = '@';
            T.push(x + 1);
        }
    }
    cout << A << endl;
    return 0;
}
