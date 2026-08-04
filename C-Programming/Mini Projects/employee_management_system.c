#include <stdio.h>
#include <string.h>
int main()
{
    struct Employee
    {
        char name[100];
        char department[100];
        float salary;
    };

    struct Employee employees[100] = {
        {"Aarav Sharma", "Engineering", 65000},
        {"Bhavya Mehta", "Engineering", 72000},
        {"Chirag Rao", "Sales", 45000},
        {"Divya Nair", "Sales", 48000},
        {"Radhika Iyer", "HR", 38000},
        {"Karan Verma", "HR", 40000},
        {"Sneha Kapoor", "Marketing", 52000},
        {"Rohan Gupta", "Marketing", 55000},
        {"Priya Desai", "Engineering", 68000},
        {"Aditya Joshi", "Sales", 47000}};
    int count = 10;

    printf("----------EMPLOYEE MANAGEMENT SYSTEM----------\n");
    while (1)
    {
        printf("\n----------- MENU -----------\n");
        printf("1. Add Employee\n");
        printf("2. View All Employees\n");
        printf("3. Search by Name\n");
        printf("4. Department-wise Employee List\n");
        printf("5. Total Salary Expenditure\n");
        printf("6. Exit\n");

        int choice;
        printf("Choose an operation (1-6): ");
        scanf("%d", &choice);


        switch (choice)
        {
        case 1:
            {
            if (count >= 100){
                printf("Employee database is full!\n");
                break;
            }
            printf("Employee Name: ");
            scanf(" %[^\n]", employees[count].name);

            printf("\nSelect Department\n");
            printf("1. Engineering\n2. Sales\n3. HR\n4. Marketing\n");

            int deptChoice;
            printf("Choice: ");
            scanf("%d", &deptChoice);

            switch (deptChoice)
            {
            case 1:
                strcpy(employees[count].department, "Engineering");break;
            case 2:
                strcpy(employees[count].department, "Sales");break;
            case 3:
                strcpy(employees[count].department, "HR");break;
            case 4:
                strcpy(employees[count].department, "Marketing");break;
            default:
                strcpy(employees[count].department, "Unknown");
            }

            printf("Salary: ");
            scanf("%f", &employees[count].salary);

            if (employees[count].salary < 0){
                printf("Invalid salary!\n");
                break;
            }
            count++;
            printf("Employee added successfully!\n");
            break;
        }
        
        case 2:
        {
            printf("\n========== Employee List ==========\n");
            for (int i = 0; i < count; i++)
            {
                printf("\nEmployee No : %d\n", i + 1);
                printf("Name        : %s\n", employees[i].name);
                printf("Department  : %s\n", employees[i].department);
                printf("Salary      : %.2f\n", employees[i].salary);
            }
            break;
        }

        case 3:
        {
            char search[100];
            int found = 0;
            printf("Enter Name of Employee ");
            scanf(" %[^\n]", search);

            for (int i = 0; i < count; i++)
            {
                if (strcmp(employees[i].name, search) == 0)
                {
                    printf("\nEmployee Found\n");
                    printf("Employee No : %d\n", i + 1);
                    printf("Name        : %s\n", employees[i].name);
                    printf("Department  : %s\n", employees[i].department);
                    printf("Salary      : %.2f\n", employees[i].salary);

                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Employee record not found!\n");
            }
            break;
        }

        case 4:
        {
            int deptChoice;
            char department[100];

            printf("\nSelect Department\n");
            printf("1. Engineering\n2. Sales\n3. HR\n4. Marketing\n5. All Departments\n");

            printf("Choice: ");
            scanf("%d", &deptChoice);
            switch (deptChoice)
            {
            case 1:
                strcpy(department, "Engineering"); break;
            case 2:
                strcpy(department, "Sales"); break;
            case 3:
                strcpy(department, "HR"); break;
            case 4:
                strcpy(department, "Marketing"); break;
            case 5:
                strcpy(department, "All"); break;
            default:
                printf("Invalid department!\n"); break;
            }

            int employee_count = 0;

            printf("\n========== Employee List ==========\n");
            for (int i = 0; i < count; i++)
            {
                if (strcmp(department, "All") == 0 ||
                    strcmp(employees[i].department, department) == 0)
                {
                    printf("\nName       : %s\n", employees[i].name);
                    printf("Department : %s\n", employees[i].department);
                    printf("Salary     : %.2f\n", employees[i].salary);

                    employee_count++;
                }
            }
            printf("Total Employees = %d\n", employee_count);
            break;
        }

        case 5:
        {
            float sum = 0;
            for (int i = 0; i < count; i++)
            {
                sum += employees[i].salary;
            }
            printf("Total salary Expenditure is %.2f\n", sum);
            break;
        }

        case 6:
            printf("Exiting......\n");
            return 0;

        default:
            printf("Invalid Choice!");
        }
    }
    return 0;
}