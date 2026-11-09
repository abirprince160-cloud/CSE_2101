#include <bits/stdc++.h>
using namespace std;

void deleteFromEnd(vector<int>& arr)
{
    arr.pop_back();
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};

    deleteFromEnd(arr);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}