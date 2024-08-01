#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int minDistance(const vector<int>& dist, const vector<bool>& sptSet, int V) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++)
        if (!sptSet[v] && dist[v] <= min)
            min = dist[v], min_index = v;
    return min_index;
}

void dijkstra(const vector<vector<int>>& graph, int src) {
    int V = graph.size();
    vector<int> dist(V, INT_MAX);
    vector<bool> sptSet(V, false);

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet, V);
        sptSet[u] = true;
        for (int v = 0; v < V; v++)
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    for (int i = 0; i < V; i++)
        cout << "Vertex: " << i << " Distance from Source: " << dist[i] << endl;
}

int main() {
    int V;
    cout << "Enter the number of vertices: ";
    cin >> V;
    vector<vector<int>> graph(V, vector<int>(V));
    cout << "Enter the adjacency matrix:\n";
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            cin >> graph[i][j];

    int src;
    cout << "Enter the source vertex: ";
    cin >> src;

    dijkstra(graph, src);

    return 0;
}
