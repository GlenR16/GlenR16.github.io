#include<stdio.h>
void randomquicksort(int number[25],int first,int last){
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      randomquicksort(number,first,j-1);
      randomquicksort(number,j+1,last);
   }
}

int main(){
   int number[10] = {10,9,8,7,6,5,4,3,2,1};
   printf("Unsorted elements: ");
   for(int i=0;i<10;i++)
      printf("%d ",number[i]);
   randomquicksort(number,0,9);
   printf("\nSorted elements: ");
   for(int i=0;i<10;i++)
      printf("%d ",number[i]);
   return 0;
}
