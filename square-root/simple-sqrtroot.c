#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void) {
    
    int user_num;
    int sq_root;
    bool sol_found = false;


    printf("Enter a whole number : ");
    scanf("%d", &user_num);

    
    int i = 0;

    while (i <= user_num) {
        sq_root = i * i;
        
        if (sq_root == user_num) {
            printf("Square root for %d is : %d\n", user_num, i);
            sol_found = true;
            break;
        }

        i++;
    }

    if (!sol_found) {
        printf("Couldnt find solutions due to anyone of the following reasons : ");
        printf("\n1. The input value is too large too handle <MUST BE IN BETWEEN 0 to 2147483647> \n2. You didn't entered a whole number \n3. Whole number sq root for your input number doesn't exists.\n");
    }

    return 0;
}
