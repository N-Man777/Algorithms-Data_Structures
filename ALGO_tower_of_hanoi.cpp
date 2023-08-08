#include <bits/stdc++.h>

using namespace std;

void hanoi_tower(int n, int from_tower, int to_tower, int helper_tower)
{
    if(n == 0)
        return;
    hanoi_tower(n-1, from_tower, helper_tower, to_tower);
    cout << from_tower << " " << to_tower << "\n";
    hanoi_tower(n-1, helper_tower, to_tower, from_tower);
}

int main()
{
    int h;
    cin >> h;
    cout << (long long)(pow(2, h) - 1)<<"\n";
    hanoi_tower(h, 1, 3, 2);
    return 0;
}
