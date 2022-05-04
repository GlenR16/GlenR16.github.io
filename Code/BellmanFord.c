#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
void bellmanFord(int graph[][3], int vertices, int edges, int source);
int main(){
int vertices = 5;
int edges = 8;
//creating a graph
//each edge has 3 values
//from edge, to edge, and weight of edge
int graph[][3] = {
{ 0, 1, -1 }, { 0, 2, 4 },
{ 1, 2, 3 }, { 1, 3, 2 },
{ 1, 4, 2 }, { 3, 2, 5 },
{ 3, 1, 1 }, { 4, 3, -3 }
};
int source = 0;
bellmanFord(graph, vertices, edges, source);
}
void bellmanFord(int graph[][3], int vertices, int edges, int source){
int distance[vertices];
for(int i=0;i<vertices;i++){
distance[i]=INT_MAX;
}
distance[source]=0;
for(int i=0;i<vertices-1;i++){
for(int j=0;j<edges;j++){
if(distance[graph[j][0]] != INT_MAX && (distance[graph[j][0]] +
graph[j][2] < distance[graph[j][1]]))
distance[graph[j][1]] = distance[graph[j][0]] + graph[j][2];
}
}
//check for -ve weight cycles
//if we find a path shorter than the
//one found above, there is a -ve weight cycle
for(int i=0;i<edges;i++){
int x = graph[i][0];
int y = graph[i][1];
int weight = graph[i][2];
if(distance[x] != INT_MAX && (distance[x] + weight < distance[y]))
{
printf("Negative Cycle Detected!\n");
return;
}
}
for(int i=0;i<vertices;i++){
printf("%d \t\t %d\n",i, distance[i]);
}
}
