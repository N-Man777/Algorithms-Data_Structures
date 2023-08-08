#include <bits\stdc++.h>

using namespace std;

int binary_search(int arr[], int n, int target)
{
    int i = 0, j = n-1;
    while (i <= j)
    {
        int m = (i + j) / 2;
        if (arr[m] == target)
            return m;
        if (arr[m] > target) j = m - 1;
        else i = m + 1;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr, arr + n);
    int found_idx = binary_search(arr, n, 7);
    cout << found_idx;
    return 0;
}