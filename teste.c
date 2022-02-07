#include <stdio.h>

int main()
{
    float salario, total;
    printf("Informe o salario: ");
    scanf("%f", &salario);

    if(salario <= 1000.00)
    {
        printf("Seu salario \x82 R$ %.2f, assim vai ter bonus de 10%% = %.2f\n", salario, total = (salario*10)/100);
    }
    else if(salario > 1000.00 && salario <= 5000.00)
    {
        printf("Seu salario \x82 R$ %.2f, assim vai ter bonus de 20%% = %.2f\n", salario, total = (salario*20)/100);
    }
    else // if(salario > 5000.00)
    {
        printf("Seu salario \x82 R$ %.2f, assim vai ter bonus de 30%% = %.2f\n", salario, total = (salario*30)/100);
    }

    system("PAUSE");
    return 0;
}