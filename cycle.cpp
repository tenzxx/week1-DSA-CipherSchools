#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Graph {
private:
    int numVertices;
    vector<vector<int>> adjList;

public:
    Graph(int vertices) {
        numVertices = vertices;
        adjList.resize(numVertices);
    }

    void addEdge(int src, int dest) {
        adjList[src].push_back(dest);
    }

    bool isCyclicUtil(int v, vector<bool>& visited, vector<bool>& recursionStack) {
        visited[v] = true;
        recursionStack[v] = true;

        for (int neighbor : adjList[v]) {
            if (!visited[neighbor]) {
                if (isCyclicUtil(neighbor, visited, recursionStack))
                    return true;
            } else if (recursionStack[neighbor]) {
                return true;
            }
        }

        recursionStack[v] = false;
        return false;
    }

    bool isCyclic() {
        vector<bool> visited(numVertices, false);
        vector<bool> recursionStack(numVertices, false);

        for (int v = 0; v < numVertices; ++v) {
            if (!visited[v] && isCyclicUtil(v, visited, recursionStack))
                return true;
        }

        return false;
    }
};

int main() {
    Graph graph(4);
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);

    if (graph.isCyclic()) {
        cout << "Cycle detected in the graph" << endl;
    } else {
        cout << "No cycle detected in the graph" << endl;
    }

    return 0;
}
