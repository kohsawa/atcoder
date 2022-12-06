#include <iostream>
#include <cmath>

using namespace std;

int Q, X;

int main()
{
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        bool is_prime = true;
        cin >> X;

        for (int i = 2; i < (int)sqrt(X) + 1; i++) {
            if (X % i == 0) {
                is_prime = false;
                break;
            }
        }

        cout << ((is_prime) ? "Yes" : "No") << endl;
    }
    return 0;
}
