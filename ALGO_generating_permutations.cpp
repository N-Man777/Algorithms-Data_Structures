#include <bits/stdc++.h>

using namespace std;

void generating_permutations(int arr[], vector<vector<int>> &permutations, int arr_size, 
                                vector<int> &current_per, vector<int> &visited)
{
    if (current_per.size() == arr_size)
    {
        permutations.push_back(current_per);
        return;
    }
    for(int i = 0; i < arr_size; ++i)
    {
        if(visited[i] == 1)
            continue;
        visited[i] = 1;
        current_per.push_back(arr[i]);
        generating_permutations(arr, permutations, arr_size, current_per, visited);
        visited[i] = 0;
        current_per.pop_back();
    }
    return ;
}

int main()
{
    int n = 4;
    int arr[] = {1,2,3,4};
    vector<vector<int>> permutations;
    vector<int> current_per;
    vector<int> visited(n, 0);
    generating_permutations(arr, permutations, n, current_per, visited);
    for(int i = 0; i< permutations.size(); ++i)
    {
        for(int elem: permutations[i])
        {
            cout << elem << " ";
        }
        cout << "\n";
    }
    return 0;
}