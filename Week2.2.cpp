#include <bits/stdc++.h>
using namespace std;
void solve(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] == arr[k])
                {
                    cout << i + 1 << " " << j + 1 << " " << k + 1;
                    return;
                }
            }
        }
    }
    cout << "No sequence found";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cout << "enter the size of array = ";
        cin >> n;
        int arr[n];
        cout << "enter the elements of array" << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n);
    }
    return 0;
}
