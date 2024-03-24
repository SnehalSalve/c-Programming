#include<Stdio.h>
int main(){
    int choice,ans;
    FILE *ptr;
    printf("\n1.Create a File \n2.Read a File \n3.Add on File \n4.Delete a File");
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("\nDp you want to create a file?");
            scanf("%d",&ans);
            if(ans==1){
                ptr = fopen("new.txt","w");
                fclose(ptr);
            }else{
                printf("\nType Exit to quit");
            }
        break;

        case 2: printf("happy");
        break;

        case 3:
        break;

        case 4:
        break;

        default:
        break;
    }
    return 0;
}