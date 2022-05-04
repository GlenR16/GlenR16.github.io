#include <stdbool.h>
#include <stdio.h>
// Number of vertices in the graph
#define V 4
void printSolution(int color[]);
// check if the colored
// graph is safe or not
bool isSafe(bool graph[V][V], int color[])
{
// check for every edge
for (int i = 0; i < V; i++)
for (int j = i + 1; j < V; j++)
if (graph[i][j] && color[j] == color[i])
return false;
return true;
}
/* This function solves the m Coloring
problem using recursion. It returns
false if the m colours cannot be assigned,
otherwise, return true and prints
assignments of colours to all vertices.
Please note that there may be more than
one solutions, this function prints one
of the feasible solutions.*/
bool graphColoring(bool graph[V][V], int m, int i,
int color[V])
{
// if current index reached end
if (i == V) {
// if coloring is safe
if (isSafe(graph, color)) {
// Print the solution
printSolution(color);
return true;
}
return false;
}
// Assign each color from 1 to m
for (int j = 1; j <= m; j++) {
color[i] = j;