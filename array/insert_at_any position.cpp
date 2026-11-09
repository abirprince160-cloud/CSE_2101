#include <bits/stdc++.h>
using namespace std;

void insertAtPosition(vector<int>& arr, int inx, int element)
{
    arr.push_back(0);

    for (int i = arr.size() - 1; i > inx; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[inx] = element;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40};

    insertAtPosition(arr, 2, 25);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}