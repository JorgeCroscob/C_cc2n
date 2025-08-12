#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco , reajuste, totalBruto , desconto ,totalLiquido;
    int quantidade;
    printf("MERCADORIA: Dados de entrada\n");
    printf("preco(R$):");
    scanf("%f",&preco);
    printf("Quantidade (unid):");
    scanf("%i", &quantidade);
    printf("Reajuste(%%):");
    scanf("%f", &reajuste);
    totalBruto = preco * quantidade;
    desconto = totalBruto *( reajuste / 100);
    totalLiquido = totalBruto - desconto;
    printf("Total (sem desconto): R$ %.2f\n",totalBruto);
    printf("Total (%.2f %% OFF): R$ %.2f\n", reajuste, totalLiquido);
    printf("Total (%.2f %%): R$ %.2f\n", reajuste, desconto);
    return 0;
}
