#include <stdio.h>
using namespace std;
//BubbleSort
int main(){
    printf("Enter 7 numbers to sort:");
    int a[7];
    for(int i=0;i<7;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<7;i++){
        for(int j=0;j<7-i-1;j++){
            if(a[j]>a[j+1]){
                a[j]+=a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]-=a[j+1];
            }
            printf("For i = %d and j = %d : ",i,j);
            for(int i=0;i<7;i++){
                printf("%d ",a[i]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
