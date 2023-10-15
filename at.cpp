#include <stdio.h>
#include <stdbool.h>

#define MAX_N 50

// Graph representation using adjacency matrix
bool graph[MAX_N + 1][MAX_N + 1];

// Visited array for DFS
bool visited[MAX_N + 1];

// Function to perform DFS from a node
void dfs(int node, int N) {
    visited[node] = true;
    for (int i = 1; i <= N; i++) {
        if (!visited[i] && graph[node][i]) {
            dfs(i, N);
        }
    }
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    // Initialize graph and visited array
    for (int i = 1; i <= N; i++) {
        visited[i] = false;
        for (int j = 1; j <= N; j++) {
            graph[i][j] = false;
        }
    }

    // Read information about superiority
    for (int i = 0; i < M; i++) {
        int A, B;
        scanf("%d %d", &A, &B);
        graph[A][B] = true;
    }

    // Perform DFS from each node to determine reachable nodes
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            visited[j] = false;
        }
        dfs(i, N);

        // Check if all nodes are reachable from the current node
        bool all_reachable = true;
        for (int j = 1; j <= N; j++) {
            if (!visited[j]) {
                all_reachable = false;
                break;
            }
        }

        // If all nodes are reachable from the current node, it is the strongest programmer
        if (all_reachable) {
            printf("%d\n", i);
            return 0;
        }
    }

    // If no unique strongest programmer found, print -1
    printf("-1\n");
    return 0;
}
