#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seletor,i;
    for(;;){
        printf("\nEscolha a subtarefa desejada\n1 - Conversão de Nota em Conceito\n2 - Ordenar 3 Números\n3 - Limpar Console\n4 - Encerrar programa\n");
        scanf("%d",&seletor);
        if(seletor==1||seletor==2||seletor==3){
            switch(seletor){
              case 1 :
                float nota;
                printf("INSIRA A NOTA DO ALUNO:");
                scanf("%f",&nota);
                if(nota>=0&&nota<6){
                    printf("\nNOTA = %.1f CONCEITO = D\n",nota);
                }else if(nota>=6&&nota<7.5){
                    printf("\nNOTA = %.1f CONCEITO = C\n",nota);
                }else if(nota>=7.5&&nota<9){
                    printf("\nNOTA = %.1f CONCEITO = B\n",nota);
                }else if(nota>=9&&nota<=10){
                    printf("\nNOTA = %.1f CONCEITO = A\n",nota);
                }else{
                    printf("\nNota Inválida.\n");
                }
              break;
            
              case 2 :
                float n1,n2,n3;
                printf("INSIRA 3 NUMEROS:");
                scanf("%f%f%f",&n1,&n2,&n3);
                printf("OS NUMEROS EM ORDEM CRESCENTE SAO:");
                if(n1<n2&&n1<n3&&n2<n3){
                    printf("%.2f, %.2f, %.2f\n",n1,n2,n3);
                }
                if(n2<n1&&n2<n3&&n1<n3){
                    printf("%.2f, %.2f, %.2f\n",n2,n1,n3);
                }
                if(n3<n2&&n3<n1&&n1<n2){
                    printf("%.2f, %.2f, %.2f\n",n3,n1,n2);
                }
                if(n1<n2&&n1<n3&&n3<n2){
                    printf("%.2f, %.2f, %.2f\n",n1,n3,n2);
                }
                if(n2<n1&&n2<n3&&n3<n1){
                    printf("%.2f, %.2f, %.2f\n",n2,n3,n1);
                }
                if(n3<n1&&n3<n2&&n2<n1){
                    printf("%.2f, %.2f, %.2f\n",n3,n2,n1);
                }
                
              break;
              
              case 3 :
              system("clear");
              
              break;
            }
        }else if(seletor!=4){
            printf("Opção inválida!\n");
            
        }else if (seletor==4){
            
               break;
            
            
        }
    }
    

    return 0;
}









