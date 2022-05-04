#include <stdio.h>
#include <stdlib.h>
int max(int a, int b);
int knapSack(int capacity, int weight[], int value[], int n);
int main(){
int capacity, no_items, cur_weight, item;
int used[10];
float total_profit;
int i;
int weight[10];
int value[10];
printf("Enter the capacity of knapsack:\n");
scanf("%d", &capacity);
printf("Enter the number of items:\n");
scanf("%d", &no_items);
printf("Enter the weight and value of %d item:\n", no_items);
for (i = 0; i < no_items; i++)
{
printf("Weight[%d]:\t", i+1);
scanf("%d", &weight[i]);
printf("Value[%d]:\t", i+1);
scanf("%d", &value[i]);
}
int ans = knapSack(capacity, weight, value, no_items);
printf("%d", ans); 
}
int knapSack(int capacity, int weight[], int value[], int n){
int k[n+1][capacity+1]; // making a table, in bottom up manner
for(int i=0;i<=n;i++){
for(int j=0;j<=capacity;j++){
if(i==0 || j==0)
k[i][j]=0; // initialsing first row and first column with zeros
else if(weight[i-1] <= j){
k[i][j] = max(value[i-1] + k[i-1][j-weight[i-1]], k[i-1][j]);
//checking what to put in current cell
//by finding max of left and diagonal cells
}
else{
k[i][j] = k[i-1][j]; // if knapsack filled,
// just copy the previous cell elements
}
}
}
return k[n][capacity];
// table filled in such a manner,
// that bottom-right cell will have the final answer
}
int max(int a, int b){
return (a>=b) ? a : b;
}