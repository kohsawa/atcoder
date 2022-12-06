#include <iostream>

using namespace std;

int N, A, sum = 0;
char T;

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> T >> A;

        sum = ((T == '+') ? sum + A : (T == '-') ? sum + 10000 - A : sum * A) % 10000;
        cout << sum << endl;
    }

    return 0;
}
