#include <stdio.h>
#include <stdlib.h>
#define ARRAYSIZE(a) (sizeof(a))/(sizeof(a[0]))
static int totalNodes;
void generateSubsets(int weights[], int size, int target);
int comparator(const void *pLhs, const void *pRhs);
void subsetSum(int weights[], int tuple[], int size, int tupleSize, int sum, int
nodes, int const target);
void printSubset(int A[], int size);
int main()
{
int weights[] = {2, 7, 8, 9 ,15};
int target = 17;
int size = ARRAYSIZE(weights);
generateSubsets(weights, size, target);
printf("Nodes generated %d\n", totalNodes);
return 0;
}
void generateSubsets(int weights[], int size, int target){
int *tupletVector = (int *)malloc(size * sizeof(int));
int total = 0;
qsort(weights, size, sizeof(int), &comparator);
for(int i=0;i<size;i++){
total+=weights[i];
}//finding total of all elements in weights array
if(weights[0]<=target && total >=target)
//base condition/ constraint
subsetSum(weights, tupletVector, size, 0, 0, 0, target);
free(tupletVector);
}
// qsort compare function
int comparator(const void *pLhs, const void *pRhs)
{
int *lhs = (int *)pLhs;
int *rhs = (int *)pRhs;
return *lhs > *rhs;
}
void subsetSum(int weights[], int tuple[], int size, int tupleSize, int sum, int
nodes, int const target){
totalNodes++;
if(target == sum){
//solution found
printSubset(tuple, tupleSize);//print solution tuple
// constraint checking
if(nodes+1 < size && sum - weights[nodes] + weights[nodes+1] <= target){
//exclude previous added item and consider next node
subsetSum(weights, tuple, size, tupleSize-1, sum-weights[nodes],
nodes+1, target);
}
return;
}
else{//if target not achieved
//checking constraints
if(nodes < size && sum+weights[nodes] <= target){
//further expand tree
//generating nodes breadth-wise
for(int i=nodes;i<size;i++){
tuple[tupleSize] = weights[i];
if(sum+weights[i]<=target){
//go down one more depth
subsetSum(weights, tuple, size, tupleSize+1, sum+weights[i],
i+1, target);
}
}
}
}
}
void printSubset(int A[], int size)
{
for(int i = 0; i < size; i++)
printf("%*d", 5, A[i]);
printf("\n");
}
