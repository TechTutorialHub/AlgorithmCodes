#include <iostream>

using namespace std;

#define MAX 10 // Maximum number of vertices

// Structure to store edges
struct Edge {
    int src, dest, weight;
};

// Function to swap two edges (for manual sorting)
void swap(Edge &a, Edge &b) {
    Edge temp = a;
    a = b;
    b = temp;
}

// Function to sort edges using simple selection sort
void sortEdges(Edge edges[], int E) {
    for (int i = 0; i < E - 1; i++) {
        for (int j = i + 1; j < E; j++) {
            if (edges[j].weight < edges[i].weight) {
                swap(edges[i], edges[j]);
            }
        }
    }
}

// Function to find root of a set (disjoint set)
int findRoot(int parent[], int node) {
    while (parent[node] != node) {
        node = parent[node];
    }
    return node;
}

// Function to apply Kruskal's Algorithm
void kruskalMST(Edge edges[], int V, int E) {
    int parent[MAX]; // Parent array for union-find
    Edge result[MAX]; // Store MST edges
    int mstWeight = 0; // Total MST weight

    // Initialize each vertex as its own parent
    for (int i = 0; i < V; i++)
        parent[i] = i;

    // Sort edges by weight
    sortEdges(edges, E);

    int count = 0; // Count of edges in MST
    for (int i = 0; i < E && count < V - 1; i++) {
        int root1 = findRoot(parent, edges[i].src);
        int root2 = findRoot(parent, edges[i].dest);

        // If roots are different, include this edge in MST
        if (root1 != root2) {
            result[count] = edges[i];
            mstWeight += edges[i].weight;
            count++;

            // Union operation: Connect components
            parent[root1] = root2;
        }
    }

    // Display the MST
    cout << "\nMinimum Spanning Tree (MST):\n";
    cout << "Edge   Weight\n";
    for (int i = 0; i < count; i++) {
        cout << (char)('A' + result[i].src) << " - " 
             << (char)('A' + result[i].dest) << "     " 
             << result[i].weight << "\n";
    }
    cout << "\nFinal MST Weight: " << mstWeight << "\n";
}

int main() {
    int V = 7; // Number of vertices
    int E = 10; // Number of edges

    // List of edges from the graph
    Edge edges[] = {
        {2, 4, 1}, // C - E
        {0, 1, 2}, // A - B
        {0, 2, 3}, // A - C
        {0, 3, 3}, // A - D
        {1, 4, 3}, // B - E
        {1, 2, 4}, // B - C
        {2, 3, 5}, // C - D
        {3, 5, 7}, // D - F
        {4, 5, 8}, // E - F
        {5, 6, 9}  // F - G
    };

    // Run Kruskal's Algorithm
    kruskalMST(edges, V, E);

    return 0;
}
