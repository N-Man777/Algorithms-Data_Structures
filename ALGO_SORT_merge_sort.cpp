#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int l, int k, int r)
{
    int left_arr[k - l + 1];
    int right_arr[r-k];
    for(int i=0; i < k-l+1; ++i)
        left_arr[i] = arr[l + i];
    for (int i = 0; i < r-k; ++i)
        right_arr[i] = arr[k+1+i];
    int i = 0, j = 0, v=l;
    while (i < (k-l+1) && j < (r - k))
    {
        if (left_arr[i] < right_arr[j])
        {
            arr[v] = left_arr[i];
            ++i;
            ++v;
        }
        else
        {
            arr[v] = right_arr[j];
            ++j;
            ++v;
        }
    }
    if (i == (k-l + 1))
    {
        while (j < (r-k))
        {
            arr[v] = right_arr[j];
            ++j;
            ++v;
        }
    }
    else
    {
        while (i < (k-l + 1))
        {
            arr[v] = left_arr[i];
            ++i;
            ++v;
        }
    }
}

void merge_sort(int arr[], int l, int r)
{
    if (l == r)
    {
        return;
    }
    int k = (l + r) / 2;
    merge_sort(arr, l, k);
    merge_sort(arr, k+1, r);
    merge(arr, l, k, r);
}

int main()
{
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin>>arr[i];
    merge_sort(arr, 0, n-1);
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    return 0;
}