// Representing an application of DFS such as to find to find a path from source to goal in a maze

#include <iostream>
using namespace std;
#define MAX 10

// Maze Dimension
int n, m;
int maze[MAX][MAX];    // Maze Grid
int visited[MAX][MAX]; // Visitd Grid

// Direction to movig in the maze(Right, Down, Left, Up)

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

// Function to print the maze

void printMaze()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (maze[i][j] == 0)
            {
                cout << "#";
            }
            else if (maze[i][j] == 0)
            {
                cout << ".";
            }
            else if (maze[i][j] == 2)
            {
                cout << "S";
            }
            else if (maze[i][j] == 3)
            {
                cout << "G";
            }
            else if (maze[i][j] == -1)
            {
                cout << "*";
            }
        }
    }
}