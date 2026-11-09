#include <bits/stdc++.h>
using namespace std;

void deleteFromBeginning(vector<int>& arr)
{
    arr.erase(arr.begin());
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};

    deleteFromBeginning(arr);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}