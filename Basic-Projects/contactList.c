// // #include<Stdio.h>
// // int main(){
// //     int choice,ans;
// //     FILE *ptr;
// //     printf("\n1.Create a File \n2.Read a File \n3.Add on File \n4.Delete a File");
// //     scanf("%d",&choice);
// //     switch(choice){
// //         case 1:printf("\nDp you want to create a file?");
// //             scanf("%d",&ans);
// //             if(ans==1){
// //                 ptr = fopen("new.txt","w");
// //                 fclose(ptr);
// //             }else{
// //                 printf("\nType Exit to quit");
// //             }
// //         break;

// //         case 2: printf("happy");
// //         break;

// //         case 3:
// //         break;

// //         case 4: int answer;
// //               printf("\nDo you want to delete a file?");
// //               scanf("%c",&answer);
// //               if(answer==1){
// //                 printf("\nhiii");

// //               }else{
// //                 printf("\nGo to Main menu");
// //               }
// //         break;

// //         default:
// //         break;
// //     }
// //     return 0;
// // }

// #include <stdio.h>

// int main() {
//     // Print red text
//     printf("\033[1;31m"); // Set text color to red
//     printf("This is red text\n");
    
//     // Print green text
//     printf("\033[0;32m"); // Set text color to green
//     printf("This is green text\n");
    
//     // Print yellow text
//     printf("\033[1;33m"); // Set text color to yellow
//     printf("This is yellow text\n");
    
//     // Reset text color
//     printf("\033[0m"); // Reset text color to default
    
//      // Print red text
//     printf("\033[1;31mThis is red text\n");
    
//     // Print green text
//     printf("\033[0;32mThis is green text\n");
    
//     // Print yellow text
//     printf("\033[1;33mThis is yellow text\n");
    
//     // Reset text color
//     printf("\033[0m");
//     return 0;
// }


#include <stdio.h>

int main() {
    // Define escape sequences for text colors
    char *red = "\033[1;31m";
    char *green = "\033[1;32m";
    char *yellow = "\033[1;33m";
    char *reset = "\033[0m";
    
    // Define escape sequences for text formatting
    char *bold = "\033[1m";
    char *underline = "\033[4m";
    
    // Print border
    printf("%s+----------------------+\n", red);
    
    // Print centered text
    printf("|");
    printf("%s%s%s%s%s", bold, underline, green, "       HAPPY HOLI!       ", reset);
    printf("%s|\n", red);
    
    // Print border
    printf("+----------------------+\n");
    
    // Reset text formatting
    printf("%s", reset);
    
    return 0;
}
