#include <bits/stdc++.h>
using namespace std;

int findKthSmallest(int arr[], int n, int k)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int counter[max + 1];
    memset(counter, 0, sizeof(counter));
    int smallest = 0;
    for (int i = 0; i < n; i++)
    {
        counter[arr[i]]++;
    }
    int smallestNum;
    for (int num = 0; num <= max; num++)
    {
        if (counter[num] > 0)
        {
            smallest += counter[num];
        }
        if (smallest >= k)
        {
            return num;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {7, 1, 4, 4, 20, 15, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 5;
    cout << findKthSmallest(arr, N, K);
    return 0;
}