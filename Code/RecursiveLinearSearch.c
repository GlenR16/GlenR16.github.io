#include <stdio.h>

int checkNum(int arr[], int size, int x) {

    if(size==0)
        return -1;
    else{
        if(arr[size]==x)
            return size;
        else{
            checkNum(arr,size-1,x);
        }
    }

}

int main(){
    int list[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int search = 0;
    printf("Enter the number to search: ");
    scanf("%d",&search);
    search = checkNum(list,15,search);
    if (search!=-1){
        printf("Found element at %d index.",search);
    }
    else{
        printf("Element not found.");
    }
    return 0;
}
