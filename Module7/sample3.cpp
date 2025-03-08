#include <iostream>

using namespace std;

#define INF 99999  

// Function to find the vertex with the minimum key value
int findMinKey(int key[], bool mstSet[], int V) {
    int min = INF, minIndex = -1;

    for (int v = 0; v < V; v++)
        if (!mstSet[v] && key[v] < min) {
            min = key[v];
            minIndex = v;
        }
    return minIndex;
}

// Function to print the Minimum Spanning Tree (MST) and calculate total weight
void printMST(int parent[], int** graph, int V) {
    int totalWeight = 0;

    cout << "\nMinimum Spanning Tree (MST):\n";
    cout << "Edge  \tWeight\n";
    for (int i = 1; i < V; i++) {
        cout << (char)('A' + parent[i]) << " - " << (char)('A' + i) << " \t" << graph[i][parent[i]] << "\n";
        totalWeight += graph[i][parent[i]];
    }

  
    cout << "\nFinal Total Weight of MST: " << totalWeight << "\n";   // Print the final MST weight
}

// Prim's Algorithm for finding MST
void primMST(int** graph, int V) {
    int *parent = new int[V];  // Store MST edges
    int *key = new int[V];     // Store minimum weight edge values
    bool *mstSet = new bool[V]; // Track included vertices

    // Initialize all keys with a large value and mark mstSet as false
    for (int i = 0; i < V; i++) {
        key[i] = INF;
        mstSet[i] = false;
    }

    key[0] = 0;   // Start from first vertex (A)
    parent[0] = -1; // First node has no parent

    cout << "\nStep-by-Step Execution of Prim's Algorithm:\n";
    cout << "--------------------------------------------\n";

    // Loop to construct MST
    for (int count = 0; count < V - 1; count++) {
        int u = findMinKey(key, mstSet, V);
        mstSet[u] = true;

        // Print step
        cout << "Step " << count + 1 << ": Adding " << (char)('A' + u) << " to MST\n";

        // Update adjacent vertex keys
        for (int v = 0; v < V; v++)
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
    }

    // Print final MST and total weight
    printMST(parent, graph, V);

    // Free allocated memory
    delete[] parent;
    delete[] key;
    delete[] mstSet;
}

int main() {
    int V = 7; // Number of vertices

    // Dynamically allocate adjacency matrix
    int** graph = new int*[V];
    for (int i = 0; i < V; i++)
        graph[i] = new int[V];

    // Initialize adjacency matrix from the given MST
    int adjacencyMatrix[7][7] = {
        {0, 2, 3, 3, 0, 0, 0},
        {2, 0, 0, 0, 0, 0, 0},
        {3, 0, 0, 0, 1, 6, 0},
        {3, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 0},
        {0, 0, 6, 0, 0, 0, 9},
        {0, 0, 0, 0, 0, 9, 0}
    };

    // Copy values to dynamically allocated graph
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            graph[i][j] = adjacencyMatrix[i][j];

    // Run Prim's Algorithm
    primMST(graph, V);

    // Free memory
    for (int i = 0; i < V; i++)
        delete[] graph[i];
    delete[] graph;

    return 0;
}
