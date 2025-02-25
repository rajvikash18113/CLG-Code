#include <iostream>
using namespace std;
const int INF = 1e9;
int n, dist[10][10], dp[10][10];
bool visited[10]; // Array to track visited cities
int tsp(int pos, int count)
{
    if (count == n)
        return dist[pos][0]; // If all cities visited, return to start
    if (dp[pos][count] != -1)
        return dp[pos][count];
    int ans = INF;
    for (int city = 0; city < n; city++)
    {
        if (!visited[city])
        { // Check if city is not visited
            visited[city] = true;
            ans = min(ans, dist[pos][city] + tsp(city, count + 1));
            visited[city] = false; // Backtrack
        }
    }
    return dp[pos][count] = ans;
}
int main()
{
    cout << "Number of cities: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            dp[i][j] = -1;
    cout << "Distance matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> dist[i][j];
    visited[0] = true; // Start from city 0
    cout << "Minimum Cost: " << tsp(0, 1) << endl;
    return 0;
}