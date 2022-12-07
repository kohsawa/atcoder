#include <iostream>

using namespace std;

long long N;

int main()
{
    long long sum = 0;

    cin >> N;

    cout << (N / 3) + (N / 5) - (N / 15) << endl;
    return 0;
}
