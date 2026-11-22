#include <stdio.h>

struct Product
{
    int code;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    int n;
    printf("Enter number of products: ");
    scanf("%d", &n);

    struct Product items[n];
    struct Product *products[n];

    for (int i = 0; i < n; i++)
    {
        products[i] = &items[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for product %d:\n", i + 1);
        printf("Product Code: ");
        scanf("%d%*c", &(products[i]->code));

        printf("Product Name: ");
        scanf("%[^\n]", products[i]->name);

        printf("Quantity: ");
        scanf("%d", &(products[i]->quantity));

        printf("Price per unit: ");
        scanf("%f", &(products[i]->price));
    }

    printf("\n%-10s %-20s %-10s %-12s %-12s\n", "Code", "Name", "Quantity", "Price", "Total Value");
    printf("--------------------------------------------------------------------\n");

    float grand_total = 0.0f;
    for (int i = 0; i < n; i++)
    {
        float total_val = products[i]->quantity * products[i]->price;
        grand_total += total_val;
        printf("%-10d %-20s %-10d $%-11.2f $%-11.2f\n",
               products[i]->code,
               products[i]->name,
               products[i]->quantity,
               products[i]->price,
               total_val);
    }
    printf("--------------------------------------------------------------------\n");
    printf("Grand Total Inventory Value: $%.2f\n", grand_total);

    return 0;
}
