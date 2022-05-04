#include <stdio.h>
using namespace std;
//Modified Bubble Sort
int main(){
    printf("Enter 7 numbers to sort:");
    int a[7];
    for(int i=0;i<7;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<7; i++){
		int swaps=0;
		for(int j=0; j<7-i-1; j++){
			if(a[j]>a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				swaps++;
			}
			printf("For i = %d and j = %d : ",i,j);
            for(int i=0;i<7;i++){
                printf("%d ",a[i]);
            }
            printf("\n");
		}
		if(swaps==0)
			break;
        printf("\n");
	}
    return 0;
}
