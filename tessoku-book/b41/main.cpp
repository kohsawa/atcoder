#include <iostream>
#include <vector>

using namespace std;

int X, Y, x, y;
vector<pair<int, int>> cmd;

int main()
{
    cin >> X >> Y;

    x = X; y = Y;
    while (x > 1 || y > 1) {
        cmd.push_back(make_pair(x, y));
        if (x > y) x -= y;
        else y -= x;
    }

    cout << cmd.size() << endl;
    for (int i = cmd.size() - 1; i >= 0; i--) printf("%d %d\n", cmd[i].first, cmd[i].second);
    return 0;
}
