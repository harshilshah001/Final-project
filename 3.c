#include <stdio.h>
#include <string.h>

void main() {

    int num, rem;
    char rems[50], remsf[7], store_remsf[7];

    scanf("%d",&num);

    while(num!=1) {
        rem = num%2;
        num = num/2;

        sprintf(rems, "%d", rem); // converting to string

        strncat(remsf, rems, 1);  // combining the string

    }

    sprintf(rems, "%d", num);

    strncat(remsf, rems, 1);

    strcpy(store_remsf, remsf);

    // Printing the final string

    printf("Before:%s\n", strrev(remsf));

    printf("After:%s", store_remsf);
}