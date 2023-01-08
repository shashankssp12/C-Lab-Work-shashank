#include <stdio.h>    
     
int main()    
{    
    int arr1[] = {1, 2, 3, 4, 5};    
    int size = sizeof(arr1)/sizeof(arr1[0]);        
    
    int arr2[size];     
    for (int i = 0; i < size; i++) {     
        arr2[i] = arr1[i];     
    }         
    printf("Elements of original array: \n");    
    for (int i = 0; i < size; i++) {     
        printf("%d ", arr1[i]);    
    }   
    printf("\n");
    printf("Elements of new array: \n");    
    for (int i = 0; i < size; i++) {     
        printf("%d ", arr2[i]);    
    }    
    return 0; 
}
