// Representing an application of DFS such as to find to find a path from source to goal in a maze

#include <iostream>
using namespace std;

#define MAX 10 // Maximum maze size
// Maze dimensions
int n, m;
int maze[MAX][MAX];     // Maze grid
bool visited[MAX][MAX]; // Visited array
// Directions for moving in the maze (Right, Down, Left, Up)
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
// Function to print the maze
void printMaze()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (maze[i][j] == 1)
                cout << "# "; // Wall
            else if (maze[i][j] == 0)
                cout << ". "; // Path
            else if (maze[i][j] == 2)
                cout << "S "; // Source
            else if (maze[i][j] == 3)
                cout << "G "; // Goal
            else if (maze[i][j] == -1)
                cout << "* "; // Path taken
        }
        cout << endl;
    }
}
// DFS function to find the path
bool DFS(int x, int y, int goalX, int goalY)
{
    // If out of maze boundaries
    if (x < 0 || x >= n || y < 0 || y >= m)
        return false;

    // If it's a wall or already visited
    if (maze[x][y] == 1 || visited[x][y])
        return false;

    // Mark the cell as visited
    visited[x][y] = true;

    // If the goal is reached
    if (x == goalX && y == goalY)
    {
        maze[x][y] = 3; // Mark goal
        return true;
    }

    // Mark the path
    maze[x][y] = -1;
    // Explore all 4 directions
    for (int i = 0; i < 4; i++)
    {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if (DFS(newX, newY, goalX, goalY))
        {
            return true;
        }
    }
    // Backtrack if no path is found
    maze[x][y] = 0;
    return false;
}
// Main function
int main()
{
    cout << "Enter maze dimensions (n m): ";
    cin >> n >> m;
    // Input maze
    cout << "Enter the maze (0 for path, 1 for wall):\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> maze[i][j];
            visited[i][j] = false;
        }
    }
    int startX, startY, goalX, goalY;
    cout << "Enter source coordinates (x y): ";
    cin >> startX >> startY;
    cout << "Enter goal coordinates (x y): ";
    cin >> goalX >> goalY;
    // Mark source and goal
    maze[startX][startY] = 2;
    maze[goalX][goalY] = 3;
    cout << "\nInitial Maze:\n";
    printMaze();
    // Find path using DFS
    if (DFS(startX, startY, goalX, goalY))
    {
        cout << "\nPath found:\n";
        printMaze();
    }
    else
    {
        cout << "\nNo path found from source to goal.\n";
    }
    return 0;
}
