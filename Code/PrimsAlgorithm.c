#include<stdio.h>
#include<conio.h>
Int a,b,u,v,n,I,j,ne=1;
Int visited[10]={0},min,mincost=0,cost[10][10];
Int main()
{
Printf(“\nEnter the number of
nodes:”); Scanf(“%d”,&n);
Printf(“\nEnter the adjacency
matrix:\n”); For(i=1;i<=n;i++)
For(j=1;j<=n;j++)
{
Scanf(“%d”,&cost[i][j]);
If(cost[i][j]==0)
Cost[i][j]=999;
}
Visited[1]=1;
Printf(“\n”);
While(ne < n)
{
For(i=1,min=999;i<=n;i++)
For(j=1;j<=n;j++)
If(cost[i][j]< min)
If(visited[i]!=0)
{
Min=cost[i][j];
A=u=I;
B=v=j;
}
If(visited[u]==0 || visited[v]==0)
{
Printf(“\n Edge %d☹%d %d) cost:%d”,ne++,a,b,min);
Mincost+=min;
Visited[b]=1;
}
Cost[a][b]=cost[b][a]=999;
}
Printf(“\n Minimun cost=%d”,mincost);
Getch();