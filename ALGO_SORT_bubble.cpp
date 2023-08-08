#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; ++i)

void bubble_sort(int arr[], int n)
{
    REP(i, 0, n)
    {
        bool flag = false;
        REP (j, 0, n-1)
        {
            if (arr[j] > arr[j+1])
                std::swap(arr[j], arr[j+1]);
                flag = true;
        }
        if (!flag)
            break;
    }
}

int main()
{
    int n = 0;
    std::cin >> n;
    int arr[n] = {0};
    REP(i, 0, n)
        std::cin >> arr[i];
    bubble_sort(arr, n);
    REP(i, 0, n)
        std::cout << arr[i] << " ";
    return 0;
}