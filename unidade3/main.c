#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int seletor, selSub1,quantidadeCaminha=0,quantidadeNada=0,quantidadeDanca=0,quantidadePedala=0, nElementos=0, somatorio=0;
  float pesoCaminha[100], pesoNada[100], pesoDanca[100],totalPesoDanca=0,mediaPesoDancam=0, pesoPedala[100],porcentagemAndamBicicleta;
  char tipoAtividade;
  

  for (;;){
      printf("Escolha a subtarefa desejada\n1 - Programa sobre atividade fisica\n2 - Calculo de somatorio\n3 - Limpar Console\n4 - Encerrar programa\n");
      scanf("%d", &seletor);
      if(seletor == 1 || seletor == 2 || seletor == 3){
	    
	    
	    switch(seletor){
	    
	    
	        case 1:
	            for(;;){
		        printf("\n1 - Cadastrar uma pessoa\n2 - Exibir estatisticas atuais\n3 - Limpar console\n4 - Encerrar subtarefa\n");
		        scanf("%d", &selSub1);
		        if(selSub1 == 1 || selSub1 == 2 || selSub1==3){
		            
		            switch(selSub1){
			            case 1:
			            printf("\nInsira a ativivdade fisica praticada\nC - Caminhada\nN - Natacao\nD - Danca\nB - Bike\n");
			            scanf("%s", &tipoAtividade);
			                switch(tipoAtividade){
			                    
			                    case 'C':
			                        printf("Insira o peso da pessoa(em kg):");
			                        scanf("%f",&pesoCaminha[quantidadeCaminha]);
			                        quantidadeCaminha++;
			                        printf("%d pessoa(s) caminham\nO peso da ultima registrada e: %.2f\n",quantidadeCaminha,pesoCaminha[quantidadeCaminha-1]);
			                    break;

			                    case 'N':
			                        printf("Insira o peso da pessoa(em kg):");
			                        scanf("%f",&pesoNada[quantidadeNada]);
			                        quantidadeNada++;
			                        printf("%d pessoa(s) nadam\nO peso da ultima registrada e: %.2f\n",quantidadeNada,pesoNada[quantidadeNada-1]);
			                    break;

			                    case 'D':
    			                    printf("Insira o peso da pessoa(em kg):");
    			                    scanf("%f",&pesoDanca[quantidadeDanca]);
    			                    totalPesoDanca=totalPesoDanca+pesoDanca[quantidadeDanca];
    			                    quantidadeDanca++;
    			                    mediaPesoDancam=totalPesoDanca/quantidadeDanca;
    			                    printf("%d pessoa(s) dancam\nO peso da ultima registrada e: %.2f\n",quantidadeDanca,pesoDanca[quantidadeDanca-1]);
			                    break;

    			                case 'B':
    			                    printf("Insira o peso da pessoa(em kg):");
    			                    scanf("%f",&pesoPedala[quantidadePedala]);
    			                    quantidadePedala++;
    			                    printf("%d pessoa(s) pedalam\nO peso da ultima registrada e: %.2f\n",quantidadePedala,pesoPedala[quantidadePedala-1]);
    			                break;

			                default:
			                    printf("Opcao Invalida\n");
			            }
			                break; 

		        case 2:
			        printf("A quantidade de pessoas que caminham e: %d\n",quantidadeCaminha);
			        printf("A quantidade de pessoas que nadam e: %d\n",quantidadeNada);
			        printf("A media dos pesos das pessoas que dancam e: %.2f\n",mediaPesoDancam);
			        porcentagemAndamBicicleta=quantidadePedala*100/(quantidadePedala+quantidadeDanca+quantidadeNada+quantidadeCaminha);
			        printf("A porcentagem de pessoas que andam de bicicleta e: %.2f %%\n",porcentagemAndamBicicleta);
			  
			    break;
			    
			    case 3:
	                system("clear");
	                
                break;

			default:
			  printf("Opcao Invalida\n");
			  
			break;
			}
		    }else if(selSub1 == 4){
		      break;
		    }
		  }

    case 2:
        printf("Insira o número de elementos para o somatório\n");
        scanf("%d",&nElementos);
        for(int i=0;i<=nElementos;i++){
            somatorio=somatorio+i*(i+1);
        }
        printf("O somatorio e %d\n",somatorio);
        somatorio=0;

	break;

    case 3:
	  system("clear");
	  
    break;
	}
	}else if(seletor != 4){
        printf ("Opcao invalida!\n");

    }else if (seletor == 4){
    break;
    }
  }
return 0;
}












