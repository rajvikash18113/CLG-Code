#include <iostream>
using namespace std;

#define MAX 10 // Maximum number of vertices

int adj[MAX][MAX] = {0}; // Adjacency matrix to store the graph
bool visited[MAX] = {false}; // Visited array for DFS
int Stack[MAX]; // Stack to store topological order
int top = -1; // Stack pointer
int V; // Number of vertices

// Push onto stack
void push(int v) {
    Stack[++top] = v;
}

// Pop from stack
int pop() {
    return Stack[top--];
}

// DFS for Topological Sorting
void topologicalSort(int v) {
    visited[v] = true;

    // Visit all the adjacent vertices of v
    for (int i = 0; i < V; i++) {
        if (adj[v][i] == 1 && !visited[i]) {
            topologicalSort(i);
        }
    }
    push(v);
}

// Function to perform Topological Sort
void topologicalSortUtil() {
    // Initialize visited array
    for (int i = 0; i < V; i++) {
        visited[i] = false;
    }

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            topologicalSort(i);
        }
    }

    // Print the topological order by popping from stack
    cout << "Topological Order: ";
    while (top != -1) {
        cout << pop() << " ";
    }
    cout << endl;
}

int main() {
    cout << "Enter the number of vertices: ";
    cin >> V;

    int E;
    cout << "Enter the number of edges: ";
    cin >> E;

    // Input the edges
    cout << "Enter the edges (u v) format (from u to v):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1; // Directed edge from u to v
    }

    // Perform Topological Sort
    topologicalSortUtil();
    return 0;
}
