#include <iostream>
#include <list>
using namespace std;

// Graph class represents an undirected graph using adjacency list representation
class Graph {
    int V; // Number of vertices
    list<int> *adj; // Pointer to an array containing adjacency lists

    // A function used by BFS
    void BFSUtil(int v, bool visited[]);

public:
    Graph(int V); // Constructor
    void addEdge(int v, int w); // Function to add an edge to graph
    void connectedComponents(); // Function to print connected components
};

// Constructor for the Graph class
Graph::Graph(int V) {
    this->V = V;
    adj = new list<int>[V];
}

// Function to add an undirected edge between two vertices
void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
    adj[w].push_back(v);
}

// Utility function for BFS traversal
void Graph::BFSUtil(int v, bool visited[]) {
    // Create a queue for BFS
    list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[v] = true;
    queue.push_back(v);

    while (!queue.empty()) {
        // Dequeue a vertex from the queue and print it
        v = queue.front();
        cout << v << " ";
        queue.pop_front();

        // Get all adjacent vertices of the dequeued vertex
        // If an adjacent vertex hasn't been visited, mark it and enqueue it
        for (auto adjVertex : adj[v]) {
            if (!visited[adjVertex]) {
                visited[adjVertex] = true;
                queue.push_back(adjVertex);
            }
        }
    }
}

// Function to print connected components in an undirected graph
void Graph::connectedComponents() {
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int v = 0; v < V; v++)
        visited[v] = false;

    // Go through all the vertices to find connected components
    for (int v = 0; v < V; v++) {
        if (visited[v] == false) {
            // Print all reachable vertices from v
            BFSUtil(v, visited);
            cout << "\n";
        }
    }

    delete[] visited; // Free dynamically allocated memory
}

int main() {
    // Create a graph with 5 vertices
    Graph g(5);

    // Add edges to the graph
    g.addEdge(1, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "Following are connected components:\n";
    g.connectedComponents();

    return 0;
}
