#include <bits/stdc++.h>

using namespace std;

// Driver code
int main()
{
    // int mat[4][4] = { { 10, 20, 30, 40 },
    // 				{ 15, 25, 35, 45 },
    // 				{ 27, 29, 37, 48 },
    // 				{ 32, 33, 39, 50 } };
    // if (n == 0)
    // 	return -1;

    // int smallest = mat[0][0], largest = mat[n - 1][n - 1];
    // if (targetSearch < smallest || targetSearch > largest)
    // 	return -1;
    // int i = 0, j = n - 1;
    // while (i < n && j >= 0)
    // {
    // 	if (mat[i][j] == targetSearch)
    // 	{
    // 		cout << "n Found at "
    // 			<< i << ", " << j;
    // 		return 1;
    // 	}
    // 	if (mat[i][j] > targetSearch)
    // 		j--;

    // 	else
    // 		i++;

    // cout << "n Element not found";

    // return 0;

    int n, m;
    cin >> n >> m;
    int arr[n][m];
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int targetValue;
    cin >> targetValue;
    if (n == 0 || m == 0)
    {
        cout << -1 << " " << -1 << endl;
    }
    int smallest = arr[0][0], largest = arr[n - 1][m - 1];
    if (targetValue < smallest || targetValue > largest)
        cout << -1 << " " << -1 << endl;

    int i = 0, j = m - 1;  
    while (i < m && j >= 0)  
    { 
        if (arr[i][j] == targetValue)  
        { 
            cout << "n Found at "
                 << i << ", " << j; 
            return 1; 
        } 
        if (arr[i][j] > targetValue) 
            j--; 
        
        // Check if mat[i][j] < x 
        else 
            i++; 
    }     

    return 0;
}
