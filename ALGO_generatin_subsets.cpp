#include <bits/stdc++.h>

using namespace std;

void generate_subsets(int arr[], int k, vector<int> &current_elem, vector<vector<int>> &subsets, int n)
{
    if (k == n)
    {
        if (current_elem.size() == 0)
        {
            subsets.push_back(vector<int>(1, -1));
            return;
        }
        else
        {
            subsets.push_back(current_elem);
            return;
        }
    }
    generate_subsets(arr, k+1, current_elem, subsets, n);
    current_elem.push_back(arr[k]);
    generate_subsets(arr, k+1, current_elem, subsets, n);
    current_elem.pop_back();
}


int main()
{
    int n = 4;
    int arr[n] = {7,9,3,11};
    vector<vector<int>> subsets;
    vector<int> current_elem;
    generate_subsets(arr, 0, current_elem, subsets, n);
    for(int i = 0; i< subsets.size(); ++i)
    {
        for(int elem: subsets[i])
        {
            cout << elem << " ";
        }
        cout << "\n";
    }
    return 0;
}