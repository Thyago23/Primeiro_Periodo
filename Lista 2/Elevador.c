int main() {
    int movimentos = 0, contagem = 0;
    int nConjuntos, pessoas, quantPessoas;
    int objetivoX, objetivoY, objetivoZ, xyz;
    int origemX = 0, origemY = 0, origemZ = 0, entregue = 0;
    
    scanf("%d %d", &nConjuntos, &movimentos);
    pessoas = nConjuntos * 4;
    quantPessoas = nConjuntos * 4;

    while(pessoas > 0) {
            if(movimentos>0) {
                scanf("%d", &xyz);
                objetivoZ = (xyz)%10;
                objetivoY = ((xyz)%100)/10;
                objetivoX = (xyz)/100;

                if(origemX != objetivoX) {
                    if(origemX < objetivoX) {
                        while(origemX < objetivoX){
                            printf("d");
                            contagem++;
                            origemX++;
                            movimentos--;
                        }
                    }
                    else if(origemX > objetivoX){
                        while(origemX > objetivoX){
                            printf("e");
                            contagem++;
                            origemX--;
                            movimentos--;
                        }
                    }
                }

                if((origemX == objetivoX) && (origemY != objetivoY)) {
                    if(origemY < objetivoY) {
                        while(origemY < objetivoY){
                            printf("c");
                            contagem++;
                            origemY++;
                            movimentos--;
                        }
                    }
                    else if(origemY > objetivoY){
                        while(origemY > objetivoY){
                            printf("b");
                            contagem++;
                            origemY--;
                            movimentos--;
                        }
                    }
                }

                if((origemX == objetivoX) && (origemY == objetivoY) && (origemZ != objetivoZ)) {
                    if(origemZ < objetivoZ) {
                        while(origemZ < objetivoZ){
                            printf("f");
                            contagem++;
                            origemZ++;
                            movimentos--;
                        }
                    }
                    else if(origemZ > objetivoZ){
                        while(origemZ > objetivoZ){
                            printf("t");
                            contagem++;
                            origemZ--;
                            movimentos--;
                        }
                    }
                }
                entregue++;
                pessoas--;
                printf("\nEntregue %d no quarto %d%d%d com %d movimentos\n", entregue, objetivoX, objetivoY, objetivoZ, contagem);
            }
        if(movimentos>=0 && pessoas==0){
            printf("Todas as pessoas foram entregues.\n");
            break;
        }
        if(movimentos<0 && pessoas>0){
            printf("Faltou combustivel e foram entregues %d pessoas.\n", (quantPessoas - pessoas));
            break;
        }
    }
    printf("Fim do teste. Obrigado Kanye West!\n");
    return 0;
}