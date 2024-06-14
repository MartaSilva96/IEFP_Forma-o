#include <stdio.h>
#include <math.h>
void calcular_raizes(float a, float b, float c);

int main() {
    float a, b, c;

    // Inserir os valores de a, b e c
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    // Valor de A não deve ser diferente a 0
    if (a == 0) {
        printf("O valor de A deve ser diferente de 0.\n");
    } else {
        calcular_raizes(a, b, c);
    }

    return 0;
}

// Função para calcular a fórmula de Bhaskara
void calcular_raizes(float a, float b, float c) {
    float delta, raizpositiva, raiznegativa;

    // Calcula o discriminante
    delta = b * b - 4 * a * c;

    // Verifica se a equação pode ser resolvida
    if (delta < 0) {
        printf("A equação não tem raízes reais.\n");
    } else {
        // Calcula as duas raízes
        raizpositiva = (-b + sqrt(delta)) / (2 * a);
        raiznegativa = (-b - sqrt(delta)) / (2 * a);

        // Imprime as raízes
        printf("As raízes da equação são: %.2f e %.2f\n", raizpositiva, raiznegativa);
    }
}

