#include <iostream>
#include <map>

using namespace std;

int N, A;
map<int, int> C;
long long cnt = 0;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A;
        cnt += C[A];
        C[A] += 1;
    }
    cout << cnt << endl;
    return 0;
}
