#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0;
    cin >> N;

    for (int i = 0; i < 8; i++) {
        sum += (1 << i) * (N % 10);
        N /= 10;
    }
    cout << sum << endl;
    return 0;
}
