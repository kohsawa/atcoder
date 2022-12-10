#include <iostream>

using namespace std;

int N, H, W, xor_sum = 0;

int main()
{
    cin >> N >> H >> W;
    for (int i = 1; i <= N * 2; i++) {
        int tmp;
        cin >> tmp;
        xor_sum ^= tmp - 1;
    }

    cout << ((xor_sum == 0) ? "Second" : "First") << endl;
    return 0;
}
