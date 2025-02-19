//Joshua Ingram 2/18/2025

#include <stdio.h>
#include <stdlib.h>//class notes for 2-18(with these we can use printf,fgets and atoi)

int main(int argc, char **argv){ //reference the in class example
    if (argc < 2){ //command line argument check
        printf("Not enough arguments. \n");
        return 0;
    }
    char input[50]; //my buffer 
    int users_num;

    printf("Enter a number- ");
    fgets(input,50,stdin);
    users_num = atoi(input); 

    int result = users_num;

    for(int i = 1; i < argc; i++){// note to self argv[0] has the programs name
        result = result * atoi(argv[i]);
    }
    printf("The result of the multiplication is- %d\n", result);
    return 0;
}