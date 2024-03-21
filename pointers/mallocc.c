// array is a collection of similar datatypes with fixed size
//once we declared the size of an array it can not be change
//but in c programming we can allocate meomery manually during runtime.
//this is known as dynamic memory allocation
//to allocate memory dyanamically we used library functions - malloc() calloc() realloc() free() -> this is in <stdlib.h> header

// malloc() - memory allocation
//it reverse the block of memory of number of bytes, it returns pointer of void

//ptr = (caseType*)malloc(size);

#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
    // using malloc to allocate the int array of size 10 
    int* ptr = (int*)malloc(sizeof(int) * 10); 
  
    // allocating same array using calloc 
    int* ptr2 = (int*)calloc(10, sizeof(int)); 
  
    printf("malloc Array Size: %d\n", 10); 
    printf("calloc Array Size: %d\n", 10); 
  
    // reallocating the size of first array 
    ptr = realloc(ptr, sizeof(int) * 5); 
    printf("malloc Array Size after using realloc: %d", 5); 
  
    // freeing all memory 
    free(ptr); 
  
    return 0; 
}