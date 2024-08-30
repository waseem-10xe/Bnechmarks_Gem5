#include <stdio.h>
#include <stdbool.h>

#define V 4

bool visited[V];
int queue[V];
int front = -1, rear = -1;

void init() {
    for (int i = 0; i < V; i++)
        visited[i] = false;
}

bool isEmpty() {
    return (front == -1 && rear == -1);
}

void enqueue(int x) {
    if (isEmpty()) {
        front = rear = 0;
        queue[rear] = x;
    } else {
        rear++;
        queue[rear] = x;
    }
}

int dequeue() {
    int x = queue[front];
    if (front == rear)
        front = rear = -1;
    else
        front++;
    return x;
}

void BFS(int graph[V][V], int start) {
    visited[start] = true;
    enqueue(start);
    printf("Breadth First Traversal: ");
    while (!isEmpty()) {
        int current = dequeue();
        printf("%d ", current);
        for (int i = 0; i < V; i++) {
            if (graph[current][i] && !visited[i]) {
                visited[i] = true;
                enqueue(i);
            }
        }
    }
}

int main() {
    int graph[V][V] = {
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {1, 0, 0, 1},
        {0, 1, 1, 0}
    };
    init();
    BFS(graph, 0);
    return 0;
}

