#include <stdio.h>

int main()
{
    int p, n, d, q;
    int total_p, total_n, total_d, total_q, total_cents;
    int dollar_1, dollar_5, dollar_10, dollar_20, dollar_50, dollar_100;
    int total_1, total_5, total_10, total_20, total_50, total_100, total_dollars;
    int grand_total, cents_remainder;
    
    printf("Enter pennies: ");
    scanf("%d", &p);
    total_p = (p * 1);
    printf("Total pennies = %d cents\n", total_p);
    
    printf("Enter nickels: ");
    scanf("%d", &n);
    total_n = (n * 5);
    printf("Total nickels = %d cents\n", total_n);
    
    printf("Enter dimes: ");
    scanf("%d", &d);
    total_d = (d * 10);
    printf("Total dimes = %d cents\n", total_d);
    
    printf("Enter quarters: ");
    scanf("%d", &q);
    total_q = (q * 25);
    printf("Total quarters = %d cents\n", total_q);

    total_cents = (p * 1) + (n * 5) + (d * 10) + (q * 25);
    printf("Total cents = %d\n", total_cents);

    if (total_cents >= 100)
    {
        int dollars = total_cents / 100;
        int cents = total_cents % 100;
        printf("Total amount: $%d.%02d\n", dollars, cents);
    }
    else
    {
        printf("Total amount: $0.%02d\n", total_cents);
    }

    printf("Enter one dollar bills: ");
    scanf("%d", &dollar_1);
    total_1 = (dollar_1 * 1);
    printf("Total ones = %d dollar(s)\n", total_1);

    printf("Enter five dollar bills: ");
    scanf("%d", &dollar_5);
    total_5 = (dollar_5 * 5);
    printf("Total fives = %d dollars\n", total_5);

    printf("Enter ten dollar bills: ");
    scanf("%d", &dollar_10);
    total_10 = (dollar_10 * 10);
    printf("Total ten's = %d dollars\n", total_10);

    printf("Enter twenty dollar bills: ");
    scanf("%d", &dollar_20);
    total_20 = (dollar_20 * 20);
    printf("Total twenty's = %d dollars\n", total_20);

    printf("Enter fifty dollar bills: ");
    scanf("%d", &dollar_50);
    total_50 = (dollar_50 * 50);
    printf("Total fifty's = %d dollars\n", total_50);

    printf("Enter one hundred dollar bills: ");
    scanf("%d", &dollar_100);
    total_100 = (dollar_100 * 100);
    printf("Total hundreds = %d dollars\n", total_100);

    total_dollars = (dollar_1 * 1) + (dollar_5 * 5) + (dollar_10 * 10) + (dollar_20 * 20) + (dollar_50 * 50) + (dollar_100 * 100);
    printf("Total dollars = $%d\n", total_dollars);

    grand_total = total_dollars + total_cents / 100;
    cents_remainder = total_cents % 100;
    printf("Final total = $%d.%02d\n", grand_total, cents_remainder);

    return 0;
}
