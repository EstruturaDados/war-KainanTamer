#include <stdio.h>
#include <string.h>

struct territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    struct territorio territorios[5];

    printf("**Desafio War**\n\n");
    printf("=== SISTEMA DE CADASTRO DE TERRITORIOS ===\n");
    
    for(int i = 0; i < 5; i++) {
        printf("Cadastro do Territorio %d:\n", i + 1);
        
        printf("Digite o nome do territorio: ");
        scanf("%29s", territorios[i].nome);
        
        printf("Digite a cor do exercito: ");
        scanf("%9s", territorios[i].cor);
        
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
        
        printf("\n");
    }
    
    printf("\n=== DADOS DOS TERRITORIOS CADASTRADOS ===\n\n");
    printf("-------------------------------------------------\n");
    printf("| %-4s | %-15s | %-10s | %-6s |\n", "Numero", "Nome", "Cor", "Tropas");
    printf("-------------------------------------------------\n");
    
    for(int i = 0; i < 5; i++) {
        printf("| %-4d | %-15s | %-10s | %-6d |\n", 
               i + 1, 
               territorios[i].nome, 
               territorios[i].cor, 
               territorios[i].tropas);
    }
    
    printf("-------------------------------------------------\n");
    
    return 0;
}