 #include <stdio.h>
#include <conio.h>
int main()
{
    int arr[]={5,3,6};
    int i;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf(" traversing of array"  );
    for (i = 0; i<n; i++)
{
printf(" \n %d", arr[i]);
    }
}