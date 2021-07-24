#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, size=0, x;
    printf("Please input the size of the array: ");
    scanf("%d", &size);
    int array[size];
    printf("Please input an array of integers: \n");
    for(i=0;i<size;i++){
        scanf("%d", &array[i]);
    }
    check_int(array, size);
    return 0;
}
void check_int(int a[], int size)
{
    int num, count=0, i;
    printf("Please enter an integer: ");
    scanf("%d", &num);
    for(i=0;i<size;i++){
        if(a[i]==num){
            count++;
        }
    }
    printf("That integer appears %d times",count);
}
