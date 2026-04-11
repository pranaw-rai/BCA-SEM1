#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0;  // initial balance
    float amount;

    while(1) {
        printf("\n--- ATM MENU ---\n");
        printf("1. Balance Check\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Your balance is: %.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                if(amount > 0) {
                    balance += amount;
                    printf("Deposited successfully!\n");
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if(amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Please collect your cash.\n");
                } else {
                    printf("Insufficient balance or invalid amount!\n");
                }
                break;

            case 4:
                printf("Thank you for using ATM. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

// Output

/*

--- ATM MENU ---
1. Balance Check
2. Deposit
3. Withdraw
4. Exit
Enter your choice: 1
Your balance is: 1000.00

--- ATM MENU ---
1. Balance Check
2. Deposit
3. Withdraw
4. Exit
Enter your choice: 2
Enter deposit amount: 5000
Deposited successfully!

--- ATM MENU ---
1. Balance Check
2. Deposit
3. Withdraw
4. Exit
Enter your choice: 3
Enter withdrawal amount: 1500
Please collect your cash.

--- ATM MENU ---
1. Balance Check
2. Deposit
3. Withdraw
4. Exit
Enter your choice: 1
Your balance is: 4500.00

--- ATM MENU ---
1. Balance Check
2. Deposit
3. Withdraw
4. Exit
Enter your choice: 4
Thank you for using ATM. Goodbye!
*/