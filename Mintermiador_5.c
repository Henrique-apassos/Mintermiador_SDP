#include <stdio.h>

int main(){
    int matriz [2][2][2][2][2]; // Cada dimensao da matriz eh uma entrada de bits
    int i,j,k,l,m; // Cada variavel corresponde a uma entrada
    
    // Forma tabela-verdade
    printf("A B C D E \tF \n");

    // Loop de preenchimento da matriz
    for(i=0; i<2; i++){
        j=0; k=0; l=0; m=0; // Zera para nao chegar a 2
        for(j=0; j<2; j++){
            k=0; l=0; m=0;
            for(k=0; k<2; k++){
                l=0; m=0;
                for(l=0; l<2; l++){
                    m=0;
                    for(m=0; m<2; m++){
                        printf("%d %d %d %d %d \t", i,j,k,l,m);
                        scanf("%d", &matriz[i][j][k][l][m]);
                        
                    }
                }
            }
        }
    }

    int oc = 0; // Necessario para condicao para nao mostrar o '+' no inicio

    // Loop de mintermos
    for(i=0; i<2; i++){
        j=0; k=0; l=0; m=0;
        for(j=0; j<2; j++){
            k=0; l=0; m=0;
            for(k=0; k<2; k++){
                l=0; m=0;
                for(l=0; l<2; l++){
                    m=0;
                    for(m=0; m<2; m++){
                        // Verifica cada variavel para gerar o mintermo
                        if (matriz[i][j][k][l][m] == 1){
                            // condicao para nao mostrar o '+' no inicio
                            if(oc)
                                printf(" + ");
                            if(i == 0)
                                printf("A'");
                            else
                                printf("A");
                            if(j == 0)
                                printf("B'");
                            else
                                printf("B");
                            if(k == 0)
                                printf("C'");
                            else
                                printf("C");
                            if(l == 0)
                                printf("D'");
                            else
                                printf("D");
                            if(m == 0)
                                printf("E'");
                            else
                                printf("E");
                            oc = 1;
                        }
                        
                    }
                }
            }
        }
        
    }

    return 0;
}