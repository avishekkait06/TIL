#include <stdio.h>
int main(){
int arr[] = {1, 3, 5, 7, 8};
int n = 5;
int i;

printf("The original array elements are:\n");
for (i = 0; i < n; i++)
{
    printf("array[%d] = %d\n", i, arr[i]);
}
return 0;
}