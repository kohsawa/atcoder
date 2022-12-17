#include <iostream>

using namespace std;

int N, L, A, rem = 0;
char B;

int main()
{
    cin >> N >> L;
    for (int i = 0; i < N; i++) {
        cin >> A >> B;
        rem = max(rem, ((B == 'E') ? L - A : A));
    }
    cout << rem << endl;
    return 0;
}
