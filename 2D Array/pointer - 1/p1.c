#include <stdio.h>

int main() {
    int size;

 
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int array[size];

  
    printf("Enter array's elements:\n");
    for (int i = 0; i < size; ++i) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }


    printf("\nSquare of each element:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d", array[i] * array[i]);

       
        if (i < size - 1) {
            printf(", ");
        }
    }


}
