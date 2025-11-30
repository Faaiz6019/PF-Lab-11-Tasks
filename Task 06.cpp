#include <stdio.h>

struct salary{
    float basicpay;
    float bonus;
    float deduction;
};

struct employee{
    char name[50];
    char id[20];
    struct salary sal;
};

void addemployee(struct employee e1[], int nofempl){
	
    for(int i = 0; i < nofempl; i++){
    	
        printf("\n--- Employee %d ---\n", i+1);

        printf("Name of the Employee: ");
        scanf(" %49[^\n]", e1[i].name);     

        printf("ID of the Employee: ");
        scanf(" %19[^\n]", e1[i].id);       

        printf("Basic pay of the Employee: ");
        scanf("%f", &e1[i].sal.basicpay);

        printf("Bonus for the Employee: ");
        scanf("%f", &e1[i].sal.bonus);

        printf("Deduction for the Employee: ");
        scanf("%f", &e1[i].sal.deduction);
    }
}

float netsalary(struct employee e1){
    return e1.sal.basicpay + e1.sal.bonus - e1.sal.deduction;
}

void display(struct employee e1){
	
    printf("\n==== Employee Details ====\n");
    printf("Employee Name: %s\n", e1.name);
    printf("Employee ID: %s\n", e1.id);
    printf("Employee Basic Pay: %.2f\n", e1.sal.basicpay);
    printf("Employee Bonus: %.2f\n", e1.sal.bonus);
    printf("Employee Deduction: %.2f\n", e1.sal.deduction);
    printf("Net Salary: %.2f\n", netsalary(e1));
}

int main(void){
	
    int nofempl = 0;
    
    printf("How many Employees do you want to add? ");
    
    if(scanf("%d", &nofempl) != 1 || nofempl <= 0){
    	
        printf("Invalid number of employees.\n");
        
        return 1;
    }

    struct employee e[nofempl];   

    addemployee(e, nofempl);

    printf("\n\n=== All Employees ===\n");
    
    for(int i = 0; i < nofempl; i++){
    	
        display(e[i]);
    }

    return 0;
}

