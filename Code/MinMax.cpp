#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#define min(x, y) ((x)<=(y)? (x) : (y))
#define max(x, y) ((x)>=(y)? (x) : (y))
struct pair{
int min;
int max;
};// struct for min & max
struct pair getMinMax(int arr[], int low, int high){ // function returns
struct pair value
//max & min
struct pair minmax, mml, mmr;
if(low==high){ //if only one element
minmax.max = arr[low];
minmax.min = arr[high];
return minmax;
}
else if(high-low==1){ //if only two elements,
//check and assign min &
max
minmax.min = min(arr[low], arr[high]);
minmax.max = max(arr[low], arr[high]);
return minmax;
}
int mid = (low+high)/2;
mml = getMinMax(arr, low, mid); //find min and max of the
halved subarrays recursively
mmr = getMinMax(arr, mid+1, high); //and store into mml
(min & max of left subarray)
// and mmr (min & max
of right subarray)
minmax.min = min(mml.min, mmr.min); //comparing
minimum of both the subarrays, to find the overall minimum
minmax.max = max(mml.max, mmr.max); //comparing
maximum of both the subarrays, to find the overall maximum
return minmax;
}
int main(){
printf("Enter size: ");
int n;scanf("%d",&n);
int a[n];int len = sizeof(a)/sizeof(int);
for(int i=0;i<len;i++)
scanf("%d",&a[i]);
struct pair minmax = getMinMax(a, 0 , len-1); // storing the answer into a
variable of type strut pair
printf("MINIMUM = %d\n",minmax.min);
printf("MAXIMUM = %d",minmax.max);
}