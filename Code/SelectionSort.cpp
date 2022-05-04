#include<iostream>
using namespace std;
//Selection Sort
int main ()
{
    printf("Enter 7 numbers to sort:");
    int a[7];
    for(int i=0;i<7;i++){
        scanf("%d",&a[i]);
    }
    int loc, min , temp;
    for(int i=0;i<6;i++)
    {
        min=a[i];
        loc=i;
        for(int j=i+1;j<7;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
            printf("For i = %d and j = %d : ",i,j);
            for(int i=0;i<7;i++){
                printf("%d ",a[i]);
            }
            printf("\n");
        }
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
        printf("\n");
    }
    return 0;
}
