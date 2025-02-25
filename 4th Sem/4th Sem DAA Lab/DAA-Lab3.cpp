// Code and analyze to find an optimal solution to matrix chain multiplication using dynamic programming.
#include <iostream>
#include <climits>
using namespace std;

#define INF INT_MAX

int matrixChain(int dims[], int n)
{
    int dp[100][100]; 

    // Initializing the diagonal to 0 as single matrix multiplication cost is zero
    for (int i = 1; i < n; i++)
    {
        dp[i][i] = 0;
    }

    // Applying DP to find the minimum multiplication cost
    for (int len = 2; len < n; len++)
    {
        for (int i = 1; i < n - len + 1; i++)
        {
            int j = i + len - 1; // Corrected index for j
            dp[i][j] = INF; 

            for (int k = i; k < j; k++)
            {
                int cost = dp[i][k] + dp[k + 1][j] + dims[i - 1] * dims[k] * dims[j];
                
                if (cost < dp[i][j])
                {
                    dp[i][j] = cost;
                }
            }
        }
    }
    return dp[1][n - 1];
}

int main()
{
    int n;
    cout << "Enter number of matrices: ";
    cin >> n;

    int dims[n + 1];
    cout << "Enter dimensions of matrices (size " << n + 1 << "): ";
    
    for (int i = 0; i <= n; i++)
    {
        cin >> dims[i];
    }

    cout << "Minimum number of scalar multiplications: " << matrixChain(dims, n + 1) << endl;

    return 0;
}

