#include <bits/stdc++.h>
using namespace std;

void insertAtEnd(vector<int>& arr, int element)
{
    arr.push_back(element);
}

int main()
{
    vector<int> arr = {10, 20, 30, 40};

    insertAtEnd(arr, 50);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}