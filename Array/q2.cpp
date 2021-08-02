#include <iostream>

using namespace std;

class Pair
{
public:
    int min;
    int max;
    Pair getMinMax(int arr[], int n);
};

Pair Pair::getMinMax(int arr[], int n)
{
    Pair minmax;
    int i;
    if (n % 2 == 0)
    {
        if (arr[0] > arr[1])
        {
            minmax.max = arr[0];
            minmax.min = arr[1];
        }
        else
        {
            minmax.max = arr[1];
            minmax.min = arr[0];
        }
        i = 2;
    }
    else
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        i = 1;
    }
    while (i < n - 1)
    {
        if (arr[i] > arr[i + 1])
        {
            if (arr[i] > minmax.max)
            {
                minmax.max = arr[i];
            }
            if (arr[i + 1] < minmax.min)
            {
                minmax.min = arr[i + 1];
            }
        }
        else
        {
            if (arr[i + 1] > minmax.max)
            {
                minmax.max = arr[i + 1];
            }
            if (arr[i] < minmax.min)
            {
                minmax.min = arr[i];
            }
        }
    }
}

int main()
{
    Pair pair;
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int arr_size = 6;
    pair = pair.getMinMax(arr, arr_size);
    cout << pair.max << endl;
    cout << pair.min;
    return 0;
}