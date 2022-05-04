#include <stdio.h>
//Linear Search
int main(){
    int list[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int search = 0;
    printf("Enter the number to search: ");
    scanf("%d",&search);
    for(int i=0;i<15;i++){
        if(list[i]==search)
        {
            printf("Found element at %d index.",i);
            search = -1;
            break;
        }
    }
    if(search!=-1)
        printf("Element not found.");
    return 0;
}
