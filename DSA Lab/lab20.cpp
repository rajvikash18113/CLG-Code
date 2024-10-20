#include<iostream> 
using namespace std; 

void DFS(int);  // Function for DFS traversal
int G[10][10], visited[10], n;  // Global variables for graph, visited array, and number of vertices

int main() {
    int i, j;
    
    // Input the number of vertices
    cout << "\nEnter number of vertices: ";
    cin >> n;
    
    // Input the adjacency matrix
    cout << "\nEnter adjacency matrix of the graph: \n"; 
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> G[i][j];
        }
    }
    
    // Initialize the visited array to zero
    for (i = 0; i < n; i++) {
        visited[i] = 0;
    }
    
    // Call DFS starting from vertex 0
    cout << "DFS traversal starting from vertex 0:\n";
    DFS(0);
    
    return 0;
}

void DFS(int i) {
    cout << i << " ";  // Print the current vertex
    visited[i] = 1;  // Mark the vertex as visited
    
    // Recur for all vertices adjacent to the current vertex
    for (int j = 0; j < n; j++) {
        if (!visited[j] && G[i][j] == 1) {  // If vertex is not visited and there's an edge
            DFS(j);
        }
    }
}
