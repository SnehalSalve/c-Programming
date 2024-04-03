// cafe
// order_no - auto generate
// table_no - auto generate fixed size 12 table
// customer_name
// customer_no

// menu card - coffee tea juice sandwish rolls momos

// functions()
// view_menu_Card
// add_item
// update_item
// delete_item
// show_order
#include <stdio.h>
#include <string.h>

void add()
{
    int item, i = 0, total;
    printf("\n how many items do you want to order here:");
    scanf("%d", total);
    do
    {
        printf("\n what are the items do you want to order here:");
        printf("\n\t-  M E N U \t C A R D  -");
        printf("\n1.coffee \n2.Tea \n3.Juice \n4.sandwich \n5.rolls \n6.momos");
        scanf("%d", item);
    } while (i <= total);
}

int main()
{

    int order_no, table_no, customer_id;
    char customer_name[20];
    int choice;

    printf("\n- WELCOME TO COFFEE CAFE -");
    do
    {
        printf("\n1.Add item \n2.Update item \n3.Delete item \n4.Show order \n5.exit");
        printf("\nEnter your choice -");
        scanf("%d", choice);

        switch (choice)
        {
            case 1:
                add();
                break;
            case 2:
                add();
                break;
            case 3:
                add();
                break;
            case 4:
                add();
                break;
            case 5:
                add();
                break;
            default:
                printf("\n invalied choice");
                break;
        }
    } while (choice != 5);

    return 0;
}
