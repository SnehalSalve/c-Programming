// A
// AA
// AAA
// AAAA

// #include<stdio.h>
// int main(){

//     int i,j;
//     for(i=0;i<5;i++){
//         for(j=0;j<=i;j++){
//             printf("A");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){

//     int i,j;
//     for(i=0;i<5;i++){
//         for(j=0;j<=i;j++){
//             printf("%c",'A'+i);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// A  printf("%c",'A'+j);
// AB
// ABC
// ABCD
// ABCDE
// B A+1
// BB
// BBB
// BBBB
// BBBBB
// A A+i
// BB
// CCC
// DDDD
// EEEEE

// C Program to print the Floyd's Triangle of Alphabets 
#include <stdio.h> 

int main() 
{ 

	char n = 'A'; 

	// outer loop to print all rows 
	for (int i = 0; i < 5; i++) { 

		// innter loop to print abphabet in each row 
		for (int j = 0; j <= i; j++) { 
			printf("%c ", n++); 
		} 
		printf("\n"); 
	} 
	return 0; 
}
