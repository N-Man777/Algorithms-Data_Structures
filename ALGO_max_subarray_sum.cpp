#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; ++i)

int main()
{
    int n = 0;
    std::cin>>n;
    int arr[n] = {0};
    REP(i, 0, n)
        std::cin >> arr[i];
    
    int current_max = 0;
    int best = 0;
    REP(i, 0, n)
    {
        current_max = std::max(arr[i], current_max + arr[i]);
        best = std::max(best, current_max);
    }
    std::cout << best << "\n";
    return 0;
}