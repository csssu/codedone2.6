/**
 * @file ProblemSixth.cpp
 * @author amir aghazadeh (cssu.ama@gmail.com)
 * @brief finding out that a graph has cycle or not
 * @version 0.1.0
 * @date 2022-08-28
 * @id 6code2
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
  int src;
  int dest;
};

class Graph
{
public:
  int V;
  int E;

  Edge *edge;
};

Graph *createGraph(int V, int E)
{
  Graph *graph = new Graph();
  graph->V = V;
  graph->E = E;

  graph->edge = new Edge[graph->E * sizeof(Edge)];

  return graph;
}

int find(int parent[], int i)
{
  if (parent[i] == -1)
  {
    return i;
  }

  return find(parent, parent[i]);
}

void Union(int parent[], int x, int y)
{
  parent[x] = y;
}

int isCycle(Graph *graph)
{
  int *parent = new int[graph->V * sizeof(int)];

  memset(parent, -1, sizeof(int) * graph->V);

  for (int i = 0; i < graph->E; ++i)
  {
    int x = find(parent, graph->edge[i].src);
    int y = find(parent, graph->edge[i].dest);

    if (x == y)
    {
      return 1;
    }

    Union(parent, x, y);
  }
  return 0;
}

int main()
{
  int V, E;

  cin >> V >> E;

  Graph *graph = createGraph(V, E);

  for (int i = 0; i < E; i++)
  {
    int src, dest;
    cin >> src >> dest;

    graph->edge[i].src = src;
    graph->edge[i].dest = dest;
  }

  if (isCycle(graph))
  {
    cout << 1;
  }
  else
  {
    cout << 0;
  }

  return 0;
}
