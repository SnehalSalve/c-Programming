#include <stdio.h>
#include <string.h>

char name[50];
char mobile[11];

void studentName(int t){
    for(int i=0;i<t;i++){
        // Accept name from user
        printf("Enter student name: ");
        scanf("%s", name);
    }
}

int studentNumber(int t){
    for(int i=0;i<t;i++){
        // Accept mobile number from user
        printf("Enter student mobile number (10 digits): ");
        scanf("%s", mobile);

        // Check if mobile number is exactly 10 digits
        // if (strlen(mobile) != 10) {
        //     printf("Error: Mobile number must be exactly 10 digits.\n");
        //     return 1;
        // }
        printf("\n%s",mobile);
    }
}

void display(int t){

    // Display name and mobile number within a box
    printf("+--------------+---------------+\n");
    printf("|     Name     |    Mobile     |\n");
    printf("+--------------+---------------+\n");
    for(int i=0;i<t;i++){
        printf("| %-12s | %010lld    |\n", name, mobile);
        printf("+--------------+---------------+\n");

    }
   

}
int main() {
    int total;

    printf("\nEnter how many students do you want?");
    scanf("%d",&total);
    studentName(total);
    studentNumber(total);
    display(total);
    return 0;
}
