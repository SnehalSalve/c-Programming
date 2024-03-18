//arrays
//multidimensional arrays
//arrays and functions

//array is fixed size collection of similar data types stores in contiguous memory location
// it stores primtive data collection
// like int float char

// syntax-
// dataType arrayName[size];

#include<stdio.h>
int main(){

//     int arr[5]={1,2,3,4,5};

//     char arr2[5]={'a','b','c','d','e'};
//     printf("\n%d",arr[1]);
//     printf("\n%c\n",arr2[1]);

//     for(int i=0;i<5;i++){
//         printf("\t%d",arr[i]);
//     }

// //types of array in c - one dimensional(1D) and multidimensioal(2D)(3D)

//     int arr[5]={1,2,3,4,5};
//     printf("\n%d",arr[1]);

//     for(int i=0;i<5;i++){
//         printf("\t%d",arr[i]);
//     }

//2D

//arr[size1][size2]
int arr3[2][2][2]={1,2,3,4,5};


    // for(int i=0;i<2;i++){
        
    // for(int j=0;j<2;j++){
    //         printf("\t%d",arr3[i][j]);
    //     }
    //     printf("\n");
    // }

    //3D

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                printf("\t%d",arr3[i][j][k]);
            }
            printf("\n");
        }
        printf("\n \n");
    }
    return 0;
}
