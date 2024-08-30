#include <stdio.h>
#include <stdbool.h>

#define V 4

bool visited[V];

void init() {
    for (int i = 0; i < V; i++)
        visited[i] = false;
}

void DFS(int graph[V][V], int v) {
    visited[v] = true;
    printf("%d ", v);
    for (int i = 0; i < V; i++) {
        if (graph[v][i] && !visited[i])
            DFS(graph, i);
    }
}

int main() {
    int graph[V][V] = {
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {1, 0, 0, 1},
        {0, 1, 1, 0}
    };
    printf("Depth First Traversal: ");
    init();
    DFS(graph, 0);
    return 0;
}

