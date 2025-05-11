#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
//VARIAVEIS
int Rand;
int* Rand_p = &Rand;

char name1[15];
char* name1_p = name1;

char name2[15];
char* name2_p = name2;

char number1[5];
char* number1_p = number1;

char number2[5];
char* number2_p = number2;


//jogo de escolher o numero
int game(char* name2_p, char* name1_p, int* Rand_p, char* number1_p, char* number2_p){
    
    //tentativa de correçao
    char resultado[3];
    
    while(1){
    
    sprintf(resultado, "%d\n", *Rand_p);
    
    
        
    //player 1 time
    printf("%s:",name1_p);
    fgets(number1_p, 5, stdin);
    
    
    //player 2 time
    printf("%s:", name2_p);
    fgets(number2_p, 5, stdin);
    
    
    
    //player 1 venceu?
    if(strcmp(number1_p, resultado) == 0){
        printf("VENCEDOR: %s", name1_p);
        *Rand_p = rand() % 10 + 1;
        puts("numero sorteado novamente\n");
    }
    
    
    //player 2 venceu?
    else if(strcmp(number2_p, resultado) == 0){
        printf("VENCEDOR: %s", name2_p);
        *Rand_p = rand() % 10 + 1;
        
        puts("numero sorteado novamente\n");
    }
    
    
    //ninguem venceu?
    else{
        puts("Ninguem venceu\n");
        /*
         * olha deepseek... VAI SE LASCAR CARA, NN OUSAS CHAMAR MEU CODIGO DE FEIO*/
        /*
         * olha gemini, ja arrumei, precisa ficar mas preucupado com a pilha nn.
         */
    }
    }
    
    //fim do mundo
    return 0;
}



//Selecionar nomes
//RANDOMIZAR(MIXAR)
int main(){
    srand(time(NULL));
    
    
    puts("nome do player 1:");
    fgets(name1_p, 15, stdin);
    
    
    puts("nome do player 2:");
    fgets(name2_p, 15, stdin);
    
    
    *Rand_p = rand() % 10 + 1;
    
    
    game(name2_p, name1_p, Rand_p, number1_p, number2_p);
    
}