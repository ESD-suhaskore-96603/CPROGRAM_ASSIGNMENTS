#include <stdio.h>

int main()
{
    int id;
    int dept;
    char code;
    char slash;

    printf("Enter id: ");
    scanf("%d", &id);

    printf("Enter dept: ");
    scanf("%d", &dept);
    
	scanf("%c",&slash);

    printf("Enter designation:");
	scanf("%c",&code);
    switch (dept)
    {
        case 10:
            printf("Employee with employee ID %d is working in Marketing", id);
            break;
        case 20:
            printf("Employee with employee ID %d is working in Management", id);
            break;
        case 30:
            printf("Employee with employee ID %d is working in Sales", id);
            break;
        case 40:
            printf("Employee with employee ID %d is working in Designing", id);
            break;
        default:
            printf("Employee with employee ID %d is working in Unknown department", id);
    }

    switch (code)
    {
        case 'M':
            printf(" department as Manager");
            break;
        case 'S':
            printf(" department as Supervisor");
            break;
        case 's':
            printf(" department as Security officer");
            break;
        case 'C':
            printf(" department as Clerk");
            break;
        default:
            printf(" department as Unknown role");
    }

    printf("\n");
    return 0;
}
