#include<iostream>
using namespace std;
//InsertionSort
int main ()
{
    printf("Enter 7 numbers to sort:");
    int a[7];
    for(int i=0;i<7;i++){
        scanf("%d",&a[i]);
    }
    for(int k=1; k<7; k++)
    {
        int temp = a[k];
        int j= k-1;
        while(j>=0 && temp <= a[j])
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = temp;
        printf("For k = %d :",k);
        for(int i=0;i<7;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
