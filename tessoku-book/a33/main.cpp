#include <iostream>

using namespace std;

int N, xor_sum;

int main()
{
    cin >> N;
    cin >> xor_sum;

    for (int i = 2; i <= N; i++) {
        int tmp;
        cin >> tmp;
        xor_sum ^= tmp;
    }

    cout << ((xor_sum == 0) ? "Second" : "First") << endl;
    return 0;
}
