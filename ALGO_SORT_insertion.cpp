#include <bits\stdc++.h>

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int j = i;
        while(j)
        {
            if (arr[j] < arr[j-1])
            {
                int tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
            }
            else
                break;
            --j;
        }
    }
}

int main()
{
    int n = 0;
    std::cin >> n;
    int arr[n];
    for(int idx = 0; idx < n; ++idx)
        std::cin >> arr[idx];
    insertion_sort(arr, n);
    for(int idx = 0; idx < n; ++idx)
        std::cout << arr[idx] << " ";
    return 0;
}