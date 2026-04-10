#include<stdio.h>

struct bank {
    int acc_no;
    char name[50];
    float balance;
};

int main()
{
    struct bank b[10];
    int i;

    printf("Enter details of 10 empolyees: \n");
    for(i = 0; i < 10; i++)
    {
        printf("\nCustomer %d\n",i + 1);

        printf("Enter Account Number: ");
        scanf("%d", &b[i].acc_no);

        printf("Enter name: ");
        scanf(" %[^\n]", b[i].name);

        printf("Enter balance: ");
        scanf("%f", &b[i].balance);
    }

    printf("\nCustomers with balance greater than 10000: \n");
    for(i = 0; i < 10; i++)
    {
        if(b[i].balance > 10000) {
            printf("\nAccount no: %d", b[i].acc_no);
            printf("\nName: %s", b[i].name);
            printf("\nBalance: %2f\n", b[i].balance);
        }
    }
    return 0;
}

// Output

/*
Enter details of 10 empolyees: 

Customer 1
Enter Account Number: 123
Enter name: Muna
Enter balance: 10000

Customer 2
Enter Account Number: 234
Enter name: Barsha
Enter balance: 23523

Customer 3
Enter Account Number: 345
Enter name: Muhi
Enter balance: 1223

Customer 4
Enter Account Number: 652
Enter name: Sushma
Enter balance: 12000

Customer 5
Enter Account Number: 752
Enter name: Ingma
Enter balance: 7544

Customer 6
Enter Account Number: Ishwara
Enter name: Enter balance: ^C
pranaw-rai@pranaw-rai-Inspiron-15-3520:~/BCA_SEM1/Lab-repo$ ./q54
Enter details of 10 empolyees: 

Customer 1
Enter Account Number: 23
Enter name: Maya
Enter balance: 20000

Customer 2
Enter Account Number: 4353
Enter name: Aarti
Enter balance: 12412

Customer 3
Enter Account Number: 534
Enter name: Mina
Enter balance: 1000

Customer 4
Enter Account Number: 745
Enter name: Aasha
Enter balance: 8000

Customer 5
Enter Account Number: 765
Enter name: Priya
Enter balance: 12912

Customer 6
Enter Account Number: 7456
Enter name: Prakriti
Enter balance: 14000

Customer 7
Enter Account Number: 865
Enter name: Ruth
Enter balance: 54333

Customer 8
Enter Account Number: 1242
Enter name: Kapil
Enter balance: 5

Customer 9
Enter Account Number: 344
Enter name: Hinata
Enter balance: 12312

Customer 10
Enter Account Number: 900
Enter name: Pema
Enter balance: 11000

Customers with balance greater than 10000: 

Account no: 23
Name: Maya
Balance: 20000.000000

Account no: 4353
Name: Aarti
Balance: 12412.000000

Account no: 765
Name: Priya
Balance: 12912.000000

Account no: 7456
Name: Prakriti
Balance: 14000.000000

Account no: 865
Name: Ruth
Balance: 54333.000000

Account no: 344
Name: Hinata
Balance: 12312.000000

Account no: 900
Name: Pema
Balance: 11000.000000
*/