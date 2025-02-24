#include <iostream>
#include <queue>

using namespace std;

#define MAX_NODES 5 // Number of nodes (S, A, B, C, D)

// Adjacency matrix representation
int graph[MAX_NODES][MAX_NODES] = {
    {0, 1, 1, 1, 0},  // S -> A, B, C
    {1, 0, 0, 1, 0},  // A -> S, D
    {1, 0, 0, 0, 0},  // B -> S
    {1, 0, 0, 0, 1},  // C -> S, D
    {0, 1, 0, 1, 0}   // D -> A, C
};

// Node names
char nodes[MAX_NODES] = {'S', 'A', 'B', 'C', 'D'};

// Function to perform BFS and print the output per iteration
void BFS(int start) {
    bool visited[MAX_NODES] = {false}; // Track visited nodes
    queue<int> q;  // Queue for BFS traversal

    visited[start] = true;
    q.push(start);

    cout << "Step-by-step BFS traversal:\n";

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << "Visited: " << nodes[current] << endl;

        // Enqueue all adjacent unvisited nodes in **alphabetical order**
        for (int i = 0; i < MAX_NODES; i++) {
            if (graph[current][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main() {
    int startNode = 0; // Start from 'S'
    BFS(startNode);
    return 0;
}
