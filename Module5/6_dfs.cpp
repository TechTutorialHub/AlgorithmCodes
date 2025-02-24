#include <iostream>
#include <stack>

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

// Function to perform DFS and print the output per iteration
void DFS(int start) {
    bool visited[MAX_NODES] = {false}; // Track visited nodes
    stack<int> s;  // Stack for DFS traversal

    s.push(start); // Push the starting node onto the stack

    cout << "Step-by-step DFS traversal:\n";

    while (!s.empty()) {
        int current = s.top();
        s.pop();

        if (!visited[current]) {
            visited[current] = true;
            cout << "Visited: " << nodes[current] << endl;

            // Push adjacent nodes in **reverse alphabetical order**
            for (int i = MAX_NODES - 1; i >= 0; i--) {
                if (graph[current][i] == 1 && !visited[i]) {
                    s.push(i);
                }
            }
        }
    }
}

int main() {
    int startNode = 0; // Start from 'S'
    DFS(startNode);
    return 0;
}
