#include <bits/stdc++.h>
using namespace std;

void insertAtBeginning(vector<int>& arr, int element)
{
    arr.insert(arr.begin(), element);
}

int main()
{
    vector<int> arr = {10, 20, 30, 40};

    insertAtBeginning(arr, 5);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}