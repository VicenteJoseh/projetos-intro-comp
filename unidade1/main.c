#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seletor;
    float precoCarro, lucro, imposto, total;
    double massaAviao,accel,tempoDecolagem,velocidade,distPerc,trabalho;
    for(;;){
        printf("Escolha a subtarefa desejada\n1 - Custo Final de um Carro\n2 - Decolagem\n3 - Limpar Console\n4 - Encerrar Programa\n");
        scanf("%d",&seletor);
        if(seletor==1||seletor==2||seletor==3){
            switch(seletor){
              case 1 :
                printf("Insira o preco de fábrica do carro: ");
                scanf("%f",&precoCarro);
                printf("Insira a porcentagem do distribuidor: ");
                scanf("%f",&lucro);
                printf("Insira o percentual dos impostos: ");
                scanf("%f",&imposto);
                total = precoCarro*(1+(lucro/100)+(imposto/100));
                printf("\nO VALOR DO CARRO É = %.2f \n",total);
              break;
            
              case 2 :
                printf("Insira a massa(em toneladas) do avião: ");
                scanf("%lf",&massaAviao);
                printf("Insira a aceleração do avião(em metros por segundo): ");
                scanf("%lf",&accel);
                printf("Insira a duração da decolagem (em segundos): ");
                scanf("%lf",&tempoDecolagem);
                velocidade=accel*tempoDecolagem;
                distPerc=(accel*(tempoDecolagem*tempoDecolagem))/2;
                trabalho=(massaAviao*1000*(velocidade*velocidade))/2;
                printf("\nVELOCIDADE = %.2lf Km/h\n",velocidade*3.6);
                printf("ESPACO PERCORRIDO = %.2lf m\n",distPerc);
                printf("TRABALHO REALIZADO = %.2lf J\n",trabalho);
              break;
              
              case 3 :
              system("clear");
              
              break;
            }
            
        }else if(seletor==4){
               break;
            }else{
            printf("Opção inválida!\n");
        }
    
    }

    return 0;
}



