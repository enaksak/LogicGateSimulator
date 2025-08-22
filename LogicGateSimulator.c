#include <stdio.h>
#include <stdlib.h>

//Logic Gate Functions
int AND(int a,int b){
    return a&&b;
}
int OR(int a,int b){
    return a||b;
}

int NOT(int a){
    return !a;
}

int XOR(int a,int b){
    return a^b;
}

int NAND(int a,int b){
    return !(a && b);
}

int NOR(int a,int b){
    return !(a || b);
}

int XNOR(int a,int b){
    return !(a ^ b);
}

//Truth Table for 2inputs

void truth_table_2input(char *gate){
    int a,b;
    printf("\nTruth Table for %s gate:\n",gate);
    printf("A B | OUT\n");
    printf("---------\n");
    for (a = 0; a <=1; a++)
    {
        for ( b = 0; b <= 1; b++)
        {
            if (gate == "AND")
            {
                printf("%d %d | %d\n",a,b,AND(a,b));
            }
            else if (gate == "OR")
            {
                printf("%d %d | %d\n",a,b,OR(a,b));
            }
            else if (gate == "XOR")
            {
                printf("%d %d | %d\n",a,b,XOR(a,b));
            }
            else if (gate == "NAND")
            {
                printf("%d %d | %d\n",a,b,NAND(a,b));
            }
            else if (gate == "NOR")
            {
                printf("%d %d | %d\n",a,b,NOR(a,b));
            }
            else if (gate == "XNOR")
            {
                printf("%d %d | %d\n",a,b,XNOR(a,b));
            }
        }
        
    }
    
}





int main(){

    int choice,a,b;
    while (1)
    {
        printf("\n==============================\n");
        printf("-----LOGIC GATE SIMULATOR-----\n");
        printf("\n==============================\n");
        printf("1. AND\n");
        printf("2. OR\n");
        printf("3. NOT\n");
        printf("4. XOR\n");
        printf("5. NAND\n");
        printf("6. NOR\n");
        printf("7. XNOR\n");
        printf("8.EXIT\n");
        printf("Choose a Gate: \n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter A (0/1)\n");
            scanf("%d",&a);

            printf("Enter B (0/1)\n");
            scanf("%d",&b);

            printf("Result: %d\n",AND(a,b));
            truth_table_2input("AND");
            break;

        case 2:
            printf("Enter A (0/1)\n");
            scanf("%d",&a);

            printf("Enter B (0/1)\n");
            scanf("%d",&b);

            printf("Result: %d\n",OR(a,b));
            truth_table_2input("OR");
            break; 

        case 3:
            printf("Enter A (0/1)\n");
            scanf("%d",&a);

            printf("Result: %d\n",NOT(a));
            truth_table_NOT();
            break;

        case 4:
            printf("Enter A (0/1)\n");
            scanf("%d",&a);

            printf("Enter B (0/1)\n");
            scanf("%d",&b);

            printf("Result: %d\n",XOR(a,b));
            truth_table_2input("XOR");
            break;

        case 5:
            printf("Enter A (0/1)\n");
            scanf("%d",&a);

            printf("Enter B (0/1)\n");
            scanf("%d",&b);

            printf("Result: %d\n",NAND(a,b));
            truth_table_2input("NAND");
            break;

        case 6:
            printf("Enter A (0/1)\n");
            scanf("%d",&a);

            printf("Enter B (0/1)\n");
            scanf("%d",&b);

            printf("Result: %d\n",NOR(a,b));
            truth_table_2input("NOR");
            break;

        case 7:
            printf("Enter A (0/1)\n");
            scanf("%d",&a);

            printf("Enter B (0/1)\n");
            scanf("%d",&b);

            printf("Result: %d\n",XNOR(a,b));
            truth_table_2input("XNOR");
            break;

        case 8:
            exit(0);
            break;

        default:
            break;
        }


    }
    





    return 0;
}