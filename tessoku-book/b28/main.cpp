#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;
    int an_1 = 1, an = 1;

    for (int i = 3; i <= N; i++) {
        int tmp = an;
        an = (an + an_1) % 1'000'000'007;
        an_1 = tmp;
    }
    cout << an << endl;

    return 0;
}
